/*
 * XREFs of PfpRpControlRequestCopy @ 0x140B04A0C
 * Callers:
 *     PfpRpControlRequest @ 0x140B04938 (PfpRpControlRequest.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpControlRequestCopy(void *Src, SIZE_T Length, _QWORD *a3, _QWORD *a4, char a5)
{
  int v7; // r12d
  unsigned __int64 v10; // rax
  size_t v11; // rbx
  _QWORD *Pool2; // rdi
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  __int128 v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+50h] [rbp-48h]

  v7 = Length;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( a5 )
  {
    ProbeForRead(Src, (unsigned int)Length, 8u);
    RtlCopyFromUser(&v14, Src, 0x18uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v14, Src, 0x18uLL);
  }
  if ( (_WORD)v14 != 3
    || WORD1(v14) >= 4u
    || WORD1(v14) == 1 && (*(_QWORD *)((char *)&v14 + 4) || __PAIR64__(HIDWORD(v14), 0) != (unsigned int)v15) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = 8 * (HIDWORD(v14) + (unsigned __int64)(unsigned int)v15)
      - ((8 * (BYTE4(v14) + BYTE8(v14)) + 23) & 7)
      + 8 * (DWORD1(v14) + (unsigned __int64)DWORD2(v14))
      + 31;
  if ( v10 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v11 = (unsigned int)v10;
  if ( (_DWORD)v10 == v7 )
  {
    if ( (unsigned int)v10 > 0x28 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    else
    {
      Pool2 = a4;
    }
    if ( a5 )
      RtlCopyFromUser(Pool2, Src, v11);
    else
      RtlCopyVolatileMemory(Pool2, Src, v11);
    *(_OWORD *)Pool2 = v14;
    Pool2[2] = v15;
    *a3 = Pool2;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
