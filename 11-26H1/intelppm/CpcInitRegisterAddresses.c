/*
 * XREFs of CpcInitRegisterAddresses @ 0x14002DBE4
 * Callers:
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     MapAdddressSpaceForGenAddr @ 0x140008608 (MapAdddressSpaceForGenAddr.c)
 *     WPP_RECORDER_SF_S @ 0x1400096B8 (WPP_RECORDER_SF_S.c)
 *     GetSubspaceFromGenAddrEx @ 0x14000AEB0 (GetSubspaceFromGenAddrEx.c)
 *     RegisterSubspace @ 0x140028A60 (RegisterSubspace.c)
 */

__int64 __fastcall CpcInitRegisterAddresses(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  int v5; // ebx
  __int64 i; // rsi
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 SubspaceFromGenAddr; // rax
  __int64 v13; // rcx
  unsigned __int16 v14; // r9
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h]

  v17 = a2;
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
        v14 = 19;
        goto LABEL_25;
      }
      goto LABEL_19;
    }
LABEL_20:
    ;
  }
  v11 = *(unsigned __int8 *)(v10 + 3);
  v16 = 0LL;
  v5 = RegisterSubspace(a1, v11, &v16);
  if ( v5 >= 0 )
  {
    if ( *(_DWORD *)(v16 + 48) == v11 )
    {
      if ( *(_QWORD *)(v10 + 4) <= (__int64)*(unsigned int *)(v16 + 96) )
      {
        *(_QWORD *)(v10 + 16) = v16;
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
    v14 = 17;
LABEL_25:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v14,
      (__int64)&WPP_19d60becd19e386f6c46d8a56e03e1f2_Traceguids,
      v5);
    return (unsigned int)v5;
  }
  SubspaceFromGenAddr = GetSubspaceFromGenAddrEx(v10);
  v13 = *(_QWORD *)(a1 + 256);
  if ( !v13 )
  {
    *(_QWORD *)(a1 + 256) = SubspaceFromGenAddr;
LABEL_19:
    a2 = v17;
    goto LABEL_20;
  }
  if ( v13 == SubspaceFromGenAddr )
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
