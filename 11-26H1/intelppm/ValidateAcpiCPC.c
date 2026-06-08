/*
 * XREFs of ValidateAcpiCPC @ 0x140033F74
 * Callers:
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 * Callees:
 *     CpcRegisterIsSupportedEx @ 0x1400057A0 (CpcRegisterIsSupportedEx.c)
 *     GetCpcRegisterDefinitionTable @ 0x140008C78 (GetCpcRegisterDefinitionTable.c)
 *     WPP_RECORDER_SF_S @ 0x1400096B8 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x14000A210 (WPP_RECORDER_SF_Sd.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     ValidateAcpiCPCRegister @ 0x140034114 (ValidateAcpiCPCRegister.c)
 *     ValidateCpcResourcePriorities @ 0x140034D18 (ValidateCpcResourcePriorities.c)
 */

__int64 __fastcall ValidateAcpiCPC(__int64 a1, const wchar_t *a2, __int64 a3)
{
  unsigned int v4; // ecx
  int v6; // eax
  bool v7; // cc
  __int64 result; // rax
  int v9; // r8d
  __int64 v10; // rbp
  __int64 i; // rdi
  int v12; // edx
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = 0LL;
  v4 = *(_DWORD *)(a1 + 4);
  v15 = 0;
  if ( v4 == 1 )
  {
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 != 17 )
      goto LABEL_8;
  }
  else if ( v4 == 2 )
  {
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 != 21 )
      goto LABEL_8;
    goto LABEL_13;
  }
  if ( v4 != 3 )
  {
LABEL_13:
    v7 = v4 <= 4;
    if ( v4 != 4 )
      goto LABEL_6;
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 25 )
      goto LABEL_15;
LABEL_8:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        a3,
        0x33u,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        a2,
        v6);
    return 3221225473LL;
  }
  v6 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 23 )
    goto LABEL_8;
  v7 = 1;
LABEL_6:
  if ( !v7 )
  {
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 < 0x19u )
      goto LABEL_8;
  }
LABEL_15:
  GetCpcRegisterDefinitionTable(a1, &v16, &v15);
  v10 = v16;
  for ( i = 0LL; (unsigned int)i < v15; i = (unsigned int)(i + 1) )
  {
    v12 = 3 * i;
    LOBYTE(v9) = *(_BYTE *)(v10 + 24 * i + 17);
    LOBYTE(v12) = *(_BYTE *)(v10 + 24 * i + 16);
    result = ValidateAcpiCPCRegister(
               (int)a1 + *(_DWORD *)(v10 + 24 * i),
               v12,
               v9,
               *(_QWORD *)(v10 + 24 * i + 8),
               (__int64)a2);
    if ( (int)result < 0 )
      return result;
  }
  v13 = *(_QWORD *)(a1 + 536);
  if ( !v13 || (result = ValidateCpcResourcePriorities(v13, a2), (int)result >= 0) )
  {
    if ( !CpcRegisterIsSupportedEx(a1 + 128) && *v14 != 126 && *(_QWORD *)(a1 + 132) != 1LL )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x34u,
          (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
          a2);
      return 3221225473LL;
    }
    if ( !qword_1400193D8 )
      return 0LL;
    result = qword_1400193D8(a1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
