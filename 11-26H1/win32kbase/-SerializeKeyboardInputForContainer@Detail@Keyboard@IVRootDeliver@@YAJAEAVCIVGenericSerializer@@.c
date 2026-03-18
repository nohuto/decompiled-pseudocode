/*
 * XREFs of ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x140222158
 * Callers:
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x140221638 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 * Callees:
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x140225A6C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x14022663C (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SerializeKeyboardInputForContainer(
        struct _UNICODE_STRING **this,
        struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        const struct _KEYBOARD_INPUT_DATA *a4)
{
  int v7; // r9d
  struct _UNICODE_STRING *v8; // rbx

  v7 = CIVSerializer::Serialize((CIVSerializer *)this, this[2], a2, 1);
  if ( v7 >= 0 )
  {
    v7 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)this);
    if ( v7 >= 0 )
    {
      v8 = this[2];
      v7 = CIVSerializer::Serialize((CIVSerializer *)this, v8, a2, 0);
      if ( v7 >= 0 )
      {
        v8[1].Length = a3->Length;
        *(&v8[1].MaximumLength + 1) = a3->MaximumLength;
        LOWORD(v8[1].Buffer) = *(&a3->MaximumLength + 1);
        WORD2(v8[1].Buffer) = *(&a3->MaximumLength + 2);
        *(_DWORD *)&v8[2].Length = a3->Buffer;
      }
    }
  }
  return (unsigned int)v7;
}
