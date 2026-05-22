/*
 * XREFs of ?CreateSystemContextEndpointProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemContextEndpointProxy@@@Z @ 0x1801437DC
 * Callers:
 *     ?Materialize_BamoSystemContextEndpointProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801218F4 (-Materialize_BamoSystemContextEndpointProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ @ 0x18004D3A4 (-GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateSystemContextEndpointProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoSystemContextEndpointProxy **a2)
{
  struct ISMBamos_AutoBamos::BamoConnection *Connection; // rbx
  _DWORD *v4; // rdi
  __int64 v5; // rax

  Connection = ISMBamos_AutoBamos::BamoPeer::GetConnection(a1);
  v4 = operator new(0x48uLL);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)Connection + 31) + 8LL) + 40LL))(*((_QWORD *)Connection + 31) + 8LL);
  v4[6] = 0;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 2) = &BamoImpl::BamoSystemContextEndpointProxyImpl::`vftable';
  *((_QWORD *)v4 + 6) = 0LL;
  *((_QWORD *)v4 + 7) = 0LL;
  *(_QWORD *)v4 = &SystemContextEndpointProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v4 + 1) = &SystemContextEndpointProxy::`vftable'{for `ISystemContextEndpointProxy'};
  *((_QWORD *)v4 + 8) = v5;
  if ( v5 )
    (**(void (__fastcall ***)(__int64))(v5 + 16))(v5 + 16);
  *a2 = (struct BamoSystemContextEndpointProxy *)v4;
  return 0LL;
}
