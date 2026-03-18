/*
 * XREFs of ??1CLinkedShader@@UEAA@XZ @ 0x180145A1C
 * Callers:
 *     ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x1801459E0 (--_GCLinkedShader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ @ 0x180145960 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ.c)
 */

void __fastcall CLinkedShader::~CLinkedShader(CLinkedShader *this)
{
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader>((_QWORD *)this + 4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
