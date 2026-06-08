/*
 * XREFs of CpcInitRegisterAddresses @ 0x140026D60
 * Callers:
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     MapAdddressSpaceForGenAddr @ 0x1400054C4 (MapAdddressSpaceForGenAddr.c)
 *     WPP_RECORDER_SF_S @ 0x1400070F8 (WPP_RECORDER_SF_S.c)
 *     GetSubspaceFromGenAddrEx @ 0x140007538 (GetSubspaceFromGenAddrEx.c)
 *     RegisterSubspace @ 0x1400276B0 (RegisterSubspace.c)
 */

__int64 __fastcall CpcInitRegisterAddresses(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  int v5; // ebx
  __int64 i; // rsi
  __int64 v10; // rdi
  int v11; // ebp
  __int64 v12; // rdx
  int v13; // edx
  __int64 SubspaceFromGenAddr; // rax
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h]

  v19 = a2;
  v5 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a4 )
      return (unsigned int)v5;
    v10 = a2 + *(unsigned int *)(a3 + 24 * i);
    if ( *(_BYTE *)v10 == 10 )
      break;
    if ( !*(_BYTE *)v10 && *(_QWORD *)(v10 + 4) )
    {
      v5 = MapAdddressSpaceForGenAddr(a2 + *(unsigned int *)(a3 + 24 * i));
      if ( v5 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v5;
        v16 = 19;
        goto LABEL_25;
      }
      goto LABEL_19;
    }
LABEL_20:
    ;
  }
  v11 = *(unsigned __int8 *)(v10 + 3);
  v12 = *(unsigned __int8 *)(v10 + 3);
  v18 = 0LL;
  v5 = RegisterSubspace(a1, v12, &v18);
  if ( v5 >= 0 )
  {
    if ( *(_DWORD *)(v18 + 48) == v11 )
    {
      if ( *(_QWORD *)(v10 + 4) <= (__int64)*(unsigned int *)(v18 + 96) )
      {
        *(_QWORD *)(v10 + 16) = v18;
        v5 = 0;
      }
      else
      {
        v5 = -1073741811;
      }
    }
    else
    {
      v5 = -1073741637;
    }
  }
  *a5 = 1;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v5;
    v16 = 17;
LABEL_25:
    LOBYTE(v13) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      3,
      v16,
      (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids,
      v5);
    return (unsigned int)v5;
  }
  SubspaceFromGenAddr = GetSubspaceFromGenAddrEx(v10);
  v15 = *(_QWORD *)(a1 + 256);
  if ( !v15 )
  {
    *(_QWORD *)(a1 + 256) = SubspaceFromGenAddr;
LABEL_19:
    a2 = v19;
    goto LABEL_20;
  }
  if ( v15 == SubspaceFromGenAddr )
    goto LABEL_19;
  v5 = -1073741270;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x12u,
      (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids,
      *(const wchar_t **)(a1 + 64));
  return (unsigned int)v5;
}
