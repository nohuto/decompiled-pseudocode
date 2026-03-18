/*
 * XREFs of _GetDeviceRects @ 0x140184540
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetDeviceRects(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  _OWORD *v6; // rsi
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v6 = (_OWORD *)a2;
  if ( v3 )
  {
    LOBYTE(a2) = 19;
    v8 = HMValidateHandleNoSecure(v3, a2);
    if ( v8 )
    {
      v4 = 1;
      *v6 = *(_OWORD *)(*(_QWORD *)(v8 + 456) + 160LL);
      *a3 = *(_OWORD *)(*(_QWORD *)(v8 + 456) + 176LL);
    }
  }
  return v4;
}
