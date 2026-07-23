/*
 * XREFs of ObpInsertCallbackByAltitude @ 0x140A678A4
 * Callers:
 *     ObRegisterCallbacks @ 0x140A676A0 (ObRegisterCallbacks.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x140478810 (RtlCompareAltitudes.c)
 *     ObpLockObjectTypeExclusive @ 0x1408FFE00 (ObpLockObjectTypeExclusive.c)
 *     ObpUnlockObjectType @ 0x140A67A10 (ObpUnlockObjectType.c)
 */

__int64 __fastcall ObpInsertCallbackByAltitude(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v6; // esi
  _QWORD *v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  LONG v10; // eax
  bool v11; // zf
  const UNICODE_STRING *v13; // r15

  v6 = 0;
  ObpLockObjectTypeExclusive(a1, (__int64)a2, a3, a4);
  v7 = *(_QWORD **)(a1 + 200);
  if ( v7 == (_QWORD *)(a1 + 200) )
    goto LABEL_2;
  v13 = (const UNICODE_STRING *)a2[3];
  while ( 1 )
  {
    v10 = RtlCompareAltitudes((PCUNICODE_STRING)(v7[3] + 16LL), v13 + 1);
    v11 = v10 == 0;
    if ( v10 <= 0 )
      break;
    v7 = (_QWORD *)*v7;
    if ( v7 == (_QWORD *)(a1 + 200) )
    {
      v11 = v10 == 0;
      break;
    }
  }
  if ( !v11 )
  {
LABEL_2:
    v8 = (__int64 *)v7[1];
    v9 = *v8;
    if ( *(__int64 **)(*v8 + 8) != v8 )
      __fastfail(3u);
    *a2 = v9;
    a2[1] = v8;
    *(_QWORD *)(v9 + 8) = a2;
    *v8 = (__int64)a2;
  }
  else
  {
    v6 = -1071906799;
  }
  ObpUnlockObjectType(a1);
  return v6;
}
