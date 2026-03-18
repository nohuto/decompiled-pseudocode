/*
 * XREFs of NtUserfnINLPCREATESTRUCT @ 0x140188FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserfnINLPCREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 UserSessionState; // rax
  _OWORD v23[3]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v24; // [rsp+70h] [rbp-48h]
  __int128 v25; // [rsp+80h] [rbp-38h]
  unsigned __int64 v26; // [rsp+90h] [rbp-28h]
  __int64 v27; // [rsp+98h] [rbp-20h]
  unsigned __int64 v28; // [rsp+A0h] [rbp-18h]
  __int64 v29; // [rsp+A8h] [rbp-10h]

  memset_0(v23, 0, 0x70uLL);
  PtiCurrent(v12, v11);
  v15 = 0LL;
  if ( !a4 )
  {
    if ( a2 == 129 )
      return v15;
    goto LABEL_37;
  }
  v16 = (_OWORD *)a4;
  if ( a4 >= MmUserProbeAddress )
    v16 = (_OWORD *)MmUserProbeAddress;
  v23[0] = *v16;
  v23[1] = v16[1];
  v23[2] = v16[2];
  v24 = v16[3];
  v25 = v16[4];
  v17 = *((_QWORD *)&v24 + 1);
  if ( a7 )
  {
    if ( *((_QWORD *)&v24 + 1) )
      v17 = *((_QWORD *)&v24 + 1);
    v27 = v17;
    HIDWORD(v26) |= 0x80000000;
    v14 = -1LL;
    if ( v17 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *(_BYTE *)(v17 + v20) );
      LODWORD(v26) = v20;
      HIDWORD(v26) = (v20 + 1) | 0x80000000;
    }
    else
    {
      v26 = 0x8000000000000000uLL;
    }
    v13 = v25;
    if ( (v25 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      goto LABEL_37;
    if ( (_QWORD)v25 )
      v13 = v25;
    v29 = v13;
    HIDWORD(v28) |= 0x80000000;
    if ( !v13 )
    {
      v28 = 0x8000000000000000uLL;
      goto LABEL_37;
    }
    do
      ++v14;
    while ( *(_BYTE *)(v13 + v14) );
    v19 = (v14 + 1) | 0x80000000;
    goto LABEL_19;
  }
  if ( *((_QWORD *)&v24 + 1) )
  {
    if ( (BYTE8(v24) & 1) != 0 )
      goto LABEL_20;
    v17 = *((_QWORD *)&v24 + 1);
  }
  v27 = v17;
  HIDWORD(v26) &= ~0x80000000;
  v14 = -1LL;
  if ( v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(v17 + 2 * v18) );
    LODWORD(v26) = 2 * v18;
    HIDWORD(v26) = (2 * v18 + 2) & 0x7FFFFFFF;
  }
  else
  {
    v26 = 0LL;
  }
  v13 = v25;
  if ( (v25 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_37;
  if ( !(_QWORD)v25 )
    goto LABEL_16;
  if ( (v25 & 1) != 0 )
LABEL_20:
    ExRaiseDatatypeMisalignment();
  v13 = v25;
LABEL_16:
  v29 = v13;
  HIDWORD(v28) &= ~0x80000000;
  if ( !v13 )
  {
    v28 = 0LL;
    goto LABEL_37;
  }
  do
    ++v14;
  while ( *(_WORD *)(v13 + 2 * v14) );
  v14 = (unsigned int)(2 * v14);
  v19 = (v14 + 2) & 0x7FFFFFFF;
LABEL_19:
  v28 = __PAIR64__(v19, v14);
LABEL_37:
  UserSessionState = W32GetUserSessionState(v14, v13);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64, __int64))(UserSessionState
                                                                                        + 8LL * ((a6 + 6) & 0x1F)
                                                                                        + 70920))(
           a1,
           a2,
           a3,
           (unsigned __int64)v23 & -(__int64)(a4 != 0),
           a5);
}
