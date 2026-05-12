/*
 * XREFs of sub_140033DA4 @ 0x140033DA4
 * Callers:
 *     sub_1400329EC @ 0x1400329EC (sub_1400329EC.c)
 *     sub_140033A28 @ 0x140033A28 (sub_140033A28.c)
 *     sub_140042038 @ 0x140042038 (sub_140042038.c)
 *     sub_14006AE00 @ 0x14006AE00 (sub_14006AE00.c)
 *     StorPortInitialize @ 0x14006FFB0 (StorPortInitialize.c)
 *     sub_1400A9E40 @ 0x1400A9E40 (sub_1400A9E40.c)
 * Callees:
 *     <none>
 */

__int64 sub_140033DA4()
{
  __int64 result; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rax

  if ( qword_140168848 )
  {
    _InterlockedIncrement((volatile signed __int32 *)qword_140168848);
    return qword_140168848;
  }
  result = ExAllocatePool2(64LL, 40LL, 1146118482LL);
  v1 = result;
  if ( result )
  {
    v2 = (_QWORD *)(result + 8);
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 24));
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)v1 = 1;
    qword_140168848 = v1;
    return qword_140168848;
  }
  return result;
}
