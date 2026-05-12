/*
 * XREFs of DllUnload @ 0x1400A5240
 * Callers:
 *     <none>
 * Callees:
 *     sub_14006E0D4 @ 0x14006E0D4 (sub_14006E0D4.c)
 *     sub_14006F5F4 @ 0x14006F5F4 (sub_14006F5F4.c)
 *     sub_14006F670 @ 0x14006F670 (sub_14006F670.c)
 *     sub_140070678 @ 0x140070678 (sub_140070678.c)
 *     sub_140071474 @ 0x140071474 (sub_140071474.c)
 *     sub_1400BB79C @ 0x1400BB79C (sub_1400BB79C.c)
 *     sub_1401211E0 @ 0x1401211E0 (sub_1401211E0.c)
 *     sub_14017A968 @ 0x14017A968 (sub_14017A968.c)
 *     sub_14017BCD0 @ 0x14017BCD0 (sub_14017BCD0.c)
 *     sub_140182C40 @ 0x140182C40 (sub_140182C40.c)
 *     sub_140183CBC @ 0x140183CBC (sub_140183CBC.c)
 *     sub_1401899C8 @ 0x1401899C8 (sub_1401899C8.c)
 */

__int64 __fastcall DllUnload(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( _InterlockedExchangeAdd(&dword_140168D70, 0xFFFFFFFF) == 1 )
  {
    sub_140183CBC();
    sub_14006F670();
    ExDeleteResourceLite(&stru_140169420);
    sub_14006F5F4();
    ExDeleteResourceLite((PERESOURCE)&stru_1401692A0.DeviceExtension);
    sub_14017A968();
    ExDeleteResourceLite(&Resource);
    sub_14006E0D4();
    ExDeleteResourceLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32);
    if ( qword_140168808 )
    {
      sub_140070678((__int64)qword_140168808);
      ExFreePoolWithTag(qword_140168808, 0x57526152u);
      qword_140168808 = 0LL;
    }
    sub_14017BCD0();
    sub_140071474(v5, v4, v6);
    sub_1401899C8();
    sub_1401211E0();
    sub_140182C40();
  }
  return sub_1400BB79C(a1, a2, a3, a4);
}
