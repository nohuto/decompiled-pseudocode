/*
 * XREFs of ?AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@AEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@1@Z @ 0x1800F1B60
 * Callers:
 *     ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800F0DE0 (--4EndpointInfo@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x1801591BC (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@?$vector@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800F02B8 (--$_Emplace_reallocate@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@@st.c)
 *     ??$make_unique@U_ConnectorInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@0@XZ @ 0x1800F04E0 (--$make_unique@U_ConnectorInfo@@$$V$0A@@std@@YA-AV-$unique_ptr@U_ConnectorInfo@@U-$default_delet.c)
 *     ??1?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@QEAA@XZ @ 0x1800F09D4 (--1-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@QEAA@XZ @ 0x1800F0A04 (--1-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F0DAC (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?push_back@?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@2@@Z @ 0x1800F5A18 (-push_back@-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo@@@std@@@std.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EndpointInfo::AddExtendedTopologyInfo(
        _QWORD *a1,
        char ***a2,
        const PROPVARIANT *a3,
        const PROPVARIANT *a4)
{
  char *v8; // rax
  PROPVARIANT *v9; // rdi
  char **v10; // rsi
  char **v11; // rbp
  char *v12; // rbx
  unsigned int v13; // ebx
  HRESULT v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  PROPVARIANT **v17; // rdx
  int v19[2]; // [rsp+20h] [rbp-28h] BYREF
  void *v20[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = (char *)operator new(0x48uLL);
  v9 = (PROPVARIANT *)v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    *(_OWORD *)(v8 + 24) = 0LL;
    *((_QWORD *)v8 + 5) = 0LL;
    *((_OWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 8) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)v19 = v9;
  if ( v9 )
  {
    v10 = *a2;
    v11 = a2[1];
    while ( v10 != v11 )
    {
      std::make_unique<_ConnectorInfo,,0>(v20);
      v12 = (char *)v20[0];
      if ( !v20[0] )
      {
        v13 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C5,
          (int)"avcore\\audiocore\\server\\audiosrv\\ConstraintModel\\Lib\\ConstraintModelTypes.h",
          (const char *)0x8007000ELL);
        std::unique_ptr<_ConnectorInfo>::~unique_ptr<_ConnectorInfo>(v20);
        goto LABEL_21;
      }
      *((_DWORD *)v20[0] + 17) = *((_DWORD *)*v10 + 17);
      std::wstring::operator=(v12 + 32, *v10 + 32);
      *((_DWORD *)v12 + 16) = *((_DWORD *)*v10 + 16);
      std::wstring::operator=(v12, *v10);
      std::vector<std::unique_ptr<_ConnectorInfo>>::push_back(v9, v20);
      std::unique_ptr<_ConnectorInfo>::~unique_ptr<_ConnectorInfo>(v20);
      ++v10;
    }
    v14 = PropVariantCopy(v9 + 3, a3);
    v13 = v14;
    if ( v14 >= 0 )
    {
      v14 = PropVariantCopy(v9 + 6, a4);
      v13 = v14;
      if ( v14 >= 0 )
      {
        v17 = (PROPVARIANT **)a1[14];
        if ( v17 == (PROPVARIANT **)a1[15] )
        {
          std::vector<std::unique_ptr<_TopologyInfo>>::_Emplace_reallocate<std::unique_ptr<_TopologyInfo>>(
            a1 + 13,
            (__int64)v17,
            (__int64 *)v19);
        }
        else
        {
          *(_QWORD *)v19 = 0LL;
          *v17 = v9;
          a1[14] += 8LL;
        }
        std::unique_ptr<_TopologyInfo>::~unique_ptr<_TopologyInfo>((_TopologyInfo **)v19);
        return 0LL;
      }
      v15 = 463LL;
    }
    else
    {
      v15 = 462LL;
    }
    v16 = (unsigned int)v14;
  }
  else
  {
    v13 = -2147024882;
    v16 = 2147942414LL;
    v15 = 447LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"avcore\\audiocore\\server\\audiosrv\\ConstraintModel\\Lib\\ConstraintModelTypes.h",
    (const char *)v16);
LABEL_21:
  std::unique_ptr<_TopologyInfo>::~unique_ptr<_TopologyInfo>((_TopologyInfo **)v19);
  return v13;
}
