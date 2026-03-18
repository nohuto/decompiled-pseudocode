/*
 * XREFs of ?Destroy@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015AF88
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A480 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x14015AF20 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 * Callees:
 *     ??_G?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAAPEAXI@Z @ 0x14015AFB4 (--_G-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAAPEAXI@Z.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<24576,96>::Destroy(PVOID P)
{
  NSInstrumentation::CSectionBitmapAllocator<24576,96>::`scalar deleting destructor'();
  ExFreePoolWithTag(P, 0);
}
