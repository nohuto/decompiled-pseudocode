/*
 * XREFs of ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z @ 0x14003E07C
 * Callers:
 *     NtUserCallNextHookEx @ 0x14003D690 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14003D278 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     RtlInitLargeUnicodeString @ 0x1401BC6E8 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1401E7948 (RtlInitLargeAnsiString.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x1403E2190 (RtlReadUCharFromUser.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTCREATESTRUCT(
        unsigned int a1,
        __int64 a2,
        struct tagCBT_CREATEWNDW *volatile a3,
        int a4)
{
  struct tagCBT_CREATEWNDW *volatile v7; // rcx
  _WORD *v8; // rax
  __int64 v9; // rcx
  volatile void *v10; // rax
  __int64 v11; // r8
  _DWORD *v13; // [rsp+20h] [rbp-C8h]
  __int64 v14[2]; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-B0h]
  __int64 v16; // [rsp+40h] [rbp-A8h]
  _OWORD v17[3]; // [rsp+50h] [rbp-98h] BYREF
  volatile void *Address[2]; // [rsp+80h] [rbp-68h]
  volatile void *v19[2]; // [rsp+90h] [rbp-58h]
  _QWORD v20[2]; // [rsp+A0h] [rbp-48h] BYREF
  _BYTE v21[32]; // [rsp+B0h] [rbp-38h] BYREF

  *(_OWORD *)v14 = 0LL;
  memset_0(v17, 0, 0x70uLL);
  v7 = (struct tagCBT_CREATEWNDW *volatile)MmUserProbeAddress;
  if ( (unsigned __int64)a3 < MmUserProbeAddress )
    v7 = a3;
  *(_OWORD *)v14 = *(_OWORD *)v7;
  ProbeForWrite((volatile void *)v14[0], 0x50uLL, 1u);
  v13 = (_DWORD *)v14[0];
  v17[0] = *(_OWORD *)v14[0];
  v17[1] = *(_OWORD *)(v14[0] + 16);
  v17[2] = *(_OWORD *)(v14[0] + 32);
  *(_OWORD *)Address = *(_OWORD *)(v14[0] + 48);
  *(_OWORD *)v19 = *(_OWORD *)(v14[0] + 64);
  v14[0] = (__int64)v17;
  if ( a4 )
  {
    if ( Address[1] )
      RtlReadUCharFromUser(Address[1]);
    RtlInitLargeAnsiString(v20);
    if ( ((unsigned __int64)v19[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( v19[0] )
        RtlReadUCharFromUser(v19[0]);
      RtlInitLargeAnsiString(v21);
    }
  }
  else
  {
    v8 = Address[1];
    if ( Address[1] )
    {
      v15 = 1LL;
      ProbeForRead(Address[1], 1uLL, 2u);
      v8 = Address[1];
    }
    v20[1] = v8;
    HIDWORD(v20[0]) &= ~0x80000000;
    if ( v8 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v8[v9] );
      LODWORD(v20[0]) = 2 * v9;
      HIDWORD(v20[0]) = (2 * v9 + 2) & 0x7FFFFFFF;
    }
    else
    {
      v20[0] = 0LL;
    }
    v10 = v19[0];
    if ( ((unsigned __int64)v19[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( v19[0] )
      {
        v16 = 1LL;
        ProbeForRead(v19[0], 1uLL, 2u);
        v10 = v19[0];
      }
      RtlInitLargeUnicodeString(v21, v10);
    }
  }
  v11 = xxxCallNextHookEx(a1, a2, (__int64)v14);
  *((_QWORD *)a3 + 1) = v14[1];
  v13[11] = *(_DWORD *)(v14[0] + 44);
  v13[10] = *(_DWORD *)(v14[0] + 40);
  v13[9] = *(_DWORD *)(v14[0] + 36);
  v13[8] = *(_DWORD *)(v14[0] + 32);
  return v11;
}
