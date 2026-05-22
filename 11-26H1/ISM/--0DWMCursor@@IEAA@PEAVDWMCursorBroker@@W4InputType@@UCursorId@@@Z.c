/*
 * XREFs of ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z @ 0x1801CCC34
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x18008E0B4 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??4?$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z @ 0x1800921D4 (--4-$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z.c)
 *     ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x18014A2C0 (--4-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConne.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DWMCursor::DWMCursor(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *v7; // rcx
  Microsoft::Bamo::BaseBamoConnection *BamoServerConnection; // rax

  *(_QWORD *)(a1 + 16) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = &DWMCursor::`vftable'{for `ICursor3D'};
  *(_QWORD *)(a1 + 8) = &DWMCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *(_QWORD *)(a1 + 16) = &DWMCursor::`vftable'{for `RefCountedObject'};
  v7 = (__int64 *)(a1 + 32);
  *v7 = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 100LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_BYTE *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=(v7, a2);
  *(_QWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 52) = a3;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  Microsoft::WRL::ComPtr<InputSystemServerConnection>::operator=(
    (Microsoft::Bamo::BaseBamoConnection **)(a1 + 160),
    BamoServerConnection);
  return a1;
}
