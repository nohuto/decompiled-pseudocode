/*
 * XREFs of ?Unmap@CD3DDevice@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180101FC0
 * Callers:
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x180101F0C (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Unmap@CMappedTexture@@IEAAXXZ @ 0x1802B8EB8 (-Unmap@CMappedTexture@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DDevice::Unmap(CD3DDevice *this, struct ID3D11Resource *a2)
{
  (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *, _QWORD))(**((_QWORD **)this + 69) + 120LL))(
    *((_QWORD *)this + 69),
    a2,
    0LL);
}
