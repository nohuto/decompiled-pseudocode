/*
 * XREFs of ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z @ 0x140293450
 * Callers:
 *     NtUserCallNextHookEx @ 0x1400C3A30 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x1400C4B00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     RtlInitLargeUnicodeString @ 0x140185E0C (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1401B0F6C (RtlInitLargeAnsiString.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTCREATESTRUCT(
        unsigned int a1,
        __int64 a2,
        struct tagCBT_CREATEWNDW *volatile a3,
        int a4)
{
  struct tagCBT_CREATEWNDW *volatile v7; // rcx
  _BYTE *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v14; // [rsp+20h] [rbp-A8h]
  __int64 v15[3]; // [rsp+28h] [rbp-A0h] BYREF
  _OWORD v16[3]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v17; // [rsp+70h] [rbp-58h]
  __int128 v18; // [rsp+80h] [rbp-48h]
  _BYTE v19[16]; // [rsp+90h] [rbp-38h] BYREF
  _BYTE v20[32]; // [rsp+A0h] [rbp-28h] BYREF

  *(_OWORD *)v15 = 0LL;
  memset_0(v16, 0, 0x70uLL);
  v7 = (struct tagCBT_CREATEWNDW *volatile)MmUserProbeAddress;
  if ( (unsigned __int64)a3 < MmUserProbeAddress )
    v7 = a3;
  *(_OWORD *)v15 = *(_OWORD *)v7;
  v8 = (_BYTE *)v15[0];
  if ( v15[0] >= MmUserProbeAddress )
    v8 = (_BYTE *)MmUserProbeAddress;
  *v8 = *v8;
  v8[79] = v8[79];
  v14 = (_DWORD *)v15[0];
  v16[0] = *(_OWORD *)v15[0];
  v16[1] = *(_OWORD *)(v15[0] + 16);
  v16[2] = *(_OWORD *)(v15[0] + 32);
  v17 = *(_OWORD *)(v15[0] + 48);
  v18 = *(_OWORD *)(v15[0] + 64);
  v15[0] = (__int64)v16;
  v9 = *((_QWORD *)&v17 + 1);
  if ( a4 )
  {
    if ( *((_QWORD *)&v17 + 1) )
      v9 = *((_QWORD *)&v17 + 1);
    RtlInitLargeAnsiString((__int64)v19, v9);
    v10 = v18;
    if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (_QWORD)v18 )
        v10 = v18;
      RtlInitLargeAnsiString((__int64)v20, v10);
    }
  }
  else
  {
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( (BYTE8(v17) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = *((_QWORD *)&v17 + 1);
    }
    RtlInitLargeUnicodeString((__int64)v19, v9);
    v11 = v18;
    if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (_QWORD)v18 )
      {
        if ( (v18 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v18;
      }
      RtlInitLargeUnicodeString((__int64)v20, v11);
    }
  }
  v12 = xxxCallNextHookEx(a1, a2, (__int64)v15);
  *((_QWORD *)a3 + 1) = v15[1];
  v14[11] = *(_DWORD *)(v15[0] + 44);
  v14[10] = *(_DWORD *)(v15[0] + 40);
  v14[9] = *(_DWORD *)(v15[0] + 36);
  v14[8] = *(_DWORD *)(v15[0] + 32);
  return v12;
}
