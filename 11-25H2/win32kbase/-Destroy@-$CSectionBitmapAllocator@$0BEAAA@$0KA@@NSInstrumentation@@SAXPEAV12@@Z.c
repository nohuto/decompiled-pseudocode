/*
 * XREFs of ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AB94
 * Callers:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x14011AB34 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14011AC24 (-Create@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x14011B1B4 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ @ 0x14011B4E8 (-Initialize@-$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Create@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14011B6E8 (-Create@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14011BD10 (-Create@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14011C08C (-Create@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14011C2A4 (-Create@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1401C3A84 (-Create@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401C6FBC (-Create@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ??_G?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAAPEAXI@Z @ 0x14011ABC0 (--_G-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAAPEAXI@Z.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,160>::Destroy(PVOID P)
{
  NSInstrumentation::CSectionBitmapAllocator<909312,3552>::`scalar deleting destructor'();
  ExFreePoolWithTag(P, 0);
}
