/*
 * XREFs of HalpInitGenericErrorSourceEntryV2 @ 0x140BF205C
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140BF23F8 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x140345690 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     RtlStringCchCopyA @ 0x140486D18 (RtlStringCchCopyA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpInitGenericErrorSourceEntryV2(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 Pool2; // rdi
  char v6; // al
  _QWORD *v7; // rax
  int v8; // r15d
  _DWORD *v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int128 v15; // xmm1
  _DWORD Src[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h]
  int v19; // [rsp+30h] [rbp-50h]
  int v20; // [rsp+34h] [rbp-4Ch]
  int v21; // [rsp+38h] [rbp-48h]
  int v22; // [rsp+3Ch] [rbp-44h]
  char pszDest[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]

  v4 = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(Pool2 + 40) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 56), 8LL, 0x204u);
    v25 = *(_QWORD *)(a1 + 56);
    v26 = *(unsigned int *)(a1 + 44);
    *(_OWORD *)pszDest = 0LL;
    v24 = 0LL;
    Src[0] = 1733060695;
    Src[1] = 1;
    v18 = 80LL;
    v20 = -2147483615;
    v19 = 1280201291;
    v21 = 2;
    v22 = 48;
    RtlStringCchCopyA(pszDest, 0x20uLL, "Error_Status_block_register");
    WheaLogInternalEvent(Src);
    if ( !*(_QWORD *)(Pool2 + 40) )
      goto LABEL_12;
    v6 = *(_BYTE *)(a1 + 95);
    if ( v6 == 3 )
    {
      if ( *(_BYTE *)(a1 + 93) == 32 )
        *(_DWORD *)(Pool2 + 72) = 4;
    }
    else if ( v6 == 4 && *(_BYTE *)(a1 + 93) == 64 )
    {
      *(_DWORD *)(Pool2 + 72) = 8;
    }
    v7 = (_QWORD *)ExAllocatePool2(0x40uLL);
    *(_QWORD *)(Pool2 + 64) = v7;
    if ( v7
      && (*v7 = *(_QWORD *)(a1 + 96),
          v8 = *(_DWORD *)(a1 + 16) + 80 + *(_DWORD *)(Pool2 + 48),
          v9 = (_DWORD *)ExAllocatePool2(0x40uLL),
          (*(_QWORD *)(Pool2 + 24) = v9) != 0LL) )
    {
      *v9 = 1095059543;
      v13 = Pool2 + 88;
      v14 = 7LL;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 4LL) = 3;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 8LL) = v8;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 16LL) = 6;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 24LL) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 28LL) = 5;
      *(GUID *)(*(_QWORD *)(Pool2 + 24) + 32LL) = GENERIC_NOTIFY_TYPE_GUID;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 56LL) = 7;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 64LL) = 80;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 68LL) = *(_DWORD *)(Pool2 + 48);
      do
      {
        *(_OWORD *)v13 = *(_OWORD *)a1;
        *(_OWORD *)(v13 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v13 + 32) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(v13 + 48) = *(_OWORD *)(a1 + 48);
        *(_OWORD *)(v13 + 64) = *(_OWORD *)(a1 + 64);
        *(_OWORD *)(v13 + 80) = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v13 + 96) = *(_OWORD *)(a1 + 96);
        v13 += 128LL;
        v15 = *(_OWORD *)(a1 + 112);
        a1 += 128LL;
        *(_OWORD *)(v13 - 16) = v15;
        --v14;
      }
      while ( v14 );
      *(_OWORD *)v13 = *(_OWORD *)a1;
      *(_OWORD *)(v13 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(v13 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v13 + 48) = *(_OWORD *)(a1 + 48);
      *(_QWORD *)(v13 + 64) = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(v13 + 72) = *(_DWORD *)(a1 + 72);
    }
    else
    {
LABEL_12:
      v10 = *(void **)(Pool2 + 40);
      v4 = -1073741670;
      if ( v10 )
        MmUnmapIoSpace(v10, 8uLL);
      v11 = *(void **)(Pool2 + 64);
      if ( v11 )
        ExFreePoolWithTag(v11, 0x576C6148u);
      v12 = *(void **)(Pool2 + 24);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x576C6148u);
      ExFreePoolWithTag((PVOID)Pool2, 0x576C6148u);
      Pool2 = 0LL;
    }
  }
  else
  {
    v4 = -1073741670;
  }
  *a2 = Pool2;
  return v4;
}
