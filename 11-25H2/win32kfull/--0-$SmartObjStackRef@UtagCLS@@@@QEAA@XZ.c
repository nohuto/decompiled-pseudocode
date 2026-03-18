/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x140034B94
 * Callers:
 *     _GetClassInfoEx @ 0x140034694 (_GetClassInfoEx.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_QWORD *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdx
  _QWORD *result; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  a1[1] = *(_QWORD *)(v4 + 1672);
  result = a1;
  *(_QWORD *)(v4 + 1672) = a1 + 1;
  return result;
}
