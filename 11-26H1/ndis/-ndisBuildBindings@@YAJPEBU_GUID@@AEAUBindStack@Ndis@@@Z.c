/*
 * XREFs of ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x14014E098
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140164210 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ??1NetworkInterfaceBindProperties@@QEAA@XZ @ 0x1400E6150 (--1NetworkInterfaceBindProperties@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ndisBuildMonitoringLwfBindings @ 0x14014E2D8 (ndisBuildMonitoringLwfBindings.c)
 *     ndisIntersectAtoms @ 0x14014E4FC (ndisIntersectAtoms.c)
 *     ndisIsLwfBindable @ 0x14014E678 (ndisIsLwfBindable.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x14014E764 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x14014E7F4 (ndisIsProtocolBindingEnabled.c)
 *     ndisReadNicBindProperties @ 0x14014EC40 (ndisReadNicBindProperties.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x140160D00 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x140161230 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 */

__int64 __fastcall ndisBuildBindings(const struct _GUID *a1, struct Ndis::BindStack *a2)
{
  unsigned int NicBindProperties; // ebx
  _QWORD *v5; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned int IsProtocolBindingEnabled; // edi
  unsigned int v11; // r13d
  _QWORD *v12; // r15
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  const struct _GUID *v16; // r14
  __int64 v17; // r9
  _BYTE v18[8]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v19; // [rsp+28h] [rbp-41h]
  _BYTE v20[16]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-19h] BYREF
  int v23; // [rsp+70h] [rbp+7h]

  v21[0] = 0LL;
  v21[1] = 0LL;
  memset(v22, 0, sizeof(v22));
  v23 = 0;
  NicBindProperties = ndisReadNicBindProperties(a1, v20);
  if ( NicBindProperties )
    goto LABEL_2;
  v5 = qword_14011F6E0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *((unsigned int *)qword_14011F6E0 + 7);
  while ( v6 != v8 )
  {
    if ( v6 >= *((unsigned int *)v5 + 7) )
LABEL_24:
      __fastfail(5u);
    v9 = v7 + v5[4];
    if ( (unsigned __int8)ndisIntersectAtoms(v21, v9 + 24) )
    {
      if ( !(unsigned __int8)ndisIntersectAtoms(v22, v9 + 24) && !(unsigned __int8)ndisIntersectAtoms(v21, v9 + 40) )
      {
        v18[0] = 0;
        IsProtocolBindingEnabled = ndisIsProtocolBindingEnabled(v20, v9, v18);
        if ( IsProtocolBindingEnabled
          || v18[0]
          && (IsProtocolBindingEnabled = Ndis::BindStack::AddStaticProtocolBinding(
                                           a2,
                                           *(const wchar_t **)(*(_QWORD *)(v9 + 16) + 8LL))) != 0 )
        {
LABEL_13:
          NetworkInterfaceBindProperties::~NetworkInterfaceBindProperties((NetworkInterfaceBindProperties *)v20);
          return IsProtocolBindingEnabled;
        }
      }
    }
    ++v6;
    v7 += 64LL;
  }
  v11 = 1;
  NicBindProperties = ndisBuildMonitoringLwfBindings(v20, a2, 0LL, 0LL);
  if ( NicBindProperties )
  {
LABEL_2:
    NetworkInterfaceBindProperties::~NetworkInterfaceBindProperties((NetworkInterfaceBindProperties *)v20);
    return NicBindProperties;
  }
  else
  {
    v12 = qword_14011F6E0;
    v13 = 0LL;
    v14 = 0LL;
    v15 = *((unsigned int *)qword_14011F6E0 + 11);
    v19 = v15;
    while ( v13 != v15 )
    {
      if ( v13 >= *((unsigned int *)v12 + 11) )
        goto LABEL_24;
      v16 = (const struct _GUID *)(v14 + v12[6]);
      if ( (unsigned __int8)ndisIsLwfBindable(v20, v16) )
      {
        v18[0] = 0;
        IsProtocolBindingEnabled = ndisIsLwfBindingEnabled_0(v20, v16, v18);
        if ( IsProtocolBindingEnabled )
          goto LABEL_13;
        if ( v18[0] )
        {
          IsProtocolBindingEnabled = Ndis::BindStack::AddStaticFilterBinding(a2, v16, 0);
          if ( IsProtocolBindingEnabled )
            goto LABEL_13;
          v17 = v11++;
          IsProtocolBindingEnabled = ndisBuildMonitoringLwfBindings(v20, a2, v16, v17);
          if ( IsProtocolBindingEnabled )
            goto LABEL_13;
        }
      }
      v15 = v19;
      ++v13;
      v14 += 64LL;
    }
    NetworkInterfaceBindProperties::~NetworkInterfaceBindProperties((NetworkInterfaceBindProperties *)v20);
    return 0LL;
  }
}
