/*
 * XREFs of ?pRenderAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1401C3E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pRenderAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  struct _LUID *v2; // r8
  struct _LUID *v3; // rax
  struct _LUID *v4; // rcx
  int v5; // edx
  struct _LUID *result; // rax

  v1 = *(_QWORD *)this;
  v2 = *(struct _LUID **)(*(_QWORD *)this + 2568LL);
  if ( v2 == (struct _LUID *)-4LL && _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
  {
    v3 = *(struct _LUID **)(*(_QWORD *)(*(_QWORD *)(v1 + 1784) + 40LL) + 2568LL);
    v4 = v3 + 36;
    v5 = v3[20].LowPart & 0x4800000;
    result = v3 + 30;
  }
  else
  {
    if ( !v2 || _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
      return 0LL;
    v4 = v2 + 36;
    v5 = v2[20].LowPart & 0x4800000;
    result = v2 + 30;
  }
  if ( v5 == 0x4000000 )
    return v4;
  return result;
}
