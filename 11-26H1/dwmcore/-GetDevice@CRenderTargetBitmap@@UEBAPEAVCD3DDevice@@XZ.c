/*
 * XREFs of ?GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ @ 0x1801AA6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CRenderTargetBitmap::GetDevice(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    return (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  else
    return 0LL;
}
