/*
 * XREFs of PfpCopyUserPfnPrioRequest @ 0x140A5C958
 * Callers:
 *     PfpPfnPrioRequest @ 0x140A5C74C (PfpPfnPrioRequest.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1404BD3D0 (MmGetHighestPhysicalPage.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpCopyUserPfnPrioRequest(char *Src, SIZE_T Length, int a3, _QWORD *a4, char a5, int a6)
{
  _QWORD *v6; // r12
  unsigned int v8; // ebx
  _QWORD *v10; // rdi
  unsigned __int64 ULong64FromUser; // rsi
  unsigned int v12; // edx
  _QWORD *Pool2; // rax
  char *v14; // r15
  size_t v15; // r8
  void *v16; // rcx
  unsigned __int64 i; // rbx
  char *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // ebx

  v6 = a4;
  v8 = Length;
  v10 = 0LL;
  if ( a5 )
  {
    ProbeForRead(Src, (unsigned int)Length, 8u);
    ULong64FromUser = RtlReadULong64FromUser(Src + 8);
  }
  else
  {
    ULong64FromUser = *((_QWORD *)Src + 1);
  }
  if ( ULong64FromUser > 0xFFFFFFFF
    || 24 * (ULong64FromUser + 8) > 0xFFFFFFFF
    || !ULong64FromUser
    || ULong64FromUser > MmGetHighestPhysicalPage(0) + 1
    || v12 > v8 )
  {
LABEL_32:
    v20 = -1073741811;
    goto LABEL_29;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    if ( a5 )
      RtlCopyFromUser(Pool2, Src, 0xC0uLL);
    else
      RtlCopyVolatileMemory(Pool2, Src, 0xC0uLL);
    if ( *(_DWORD *)v10 == 1
      && ((unsigned int)(a3 - 6) > 1 || (*((_DWORD *)v10 + 1) & 0xFFFFFFFE) == 0)
      && v10[1] == ULong64FromUser )
    {
      v14 = Src + 192;
      v15 = (unsigned int)(24 * ULong64FromUser);
      v16 = v10 + 24;
      if ( a6 )
      {
        memset_0(v16, 0, v15);
        for ( i = 0LL; i < ULong64FromUser; ++i )
        {
          v18 = &v14[24 * i];
          if ( a5 )
            v19 = RtlReadULong64FromUser(v18 + 8);
          else
            v19 = *((_QWORD *)v18 + 1);
          v10[3 * i + 25] = v19;
        }
        v6 = a4;
      }
      else if ( a5 )
      {
        RtlCopyFromUser(v16, v14, v15);
      }
      else
      {
        RtlCopyVolatileMemory(v16, v14, v15);
      }
      *v6 = v10;
      v10 = 0LL;
      v20 = 0;
      goto LABEL_29;
    }
    goto LABEL_32;
  }
  v20 = -1073741670;
LABEL_29:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v20;
}
