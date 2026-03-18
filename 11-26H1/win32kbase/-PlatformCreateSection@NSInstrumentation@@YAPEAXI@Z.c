/*
 * XREFs of ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14015AACC
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A150 (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A288 (-Initialize@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A480 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A554 (-Initialize@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A640 (-Initialize@-$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Create@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A890 (-Create@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A9A0 (-Initialize@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x14015AA6C (-Initialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ @ 0x14015B118 (-Initialize@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BAAA@$0EA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DEDF8 (-Initialize@-$CSectionEntry@$0BAAA@$0EA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BAAA@$0IA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DEEC4 (-Initialize@-$CSectionEntry@$0BAAA@$0IA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0DAAA@$0DA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DEF90 (-Initialize@-$CSectionEntry@$0DAAA@$0DA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0DAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF05C (-Initialize@-$CSectionEntry@$0DAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF128 (-Initialize@-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF1F4 (-Initialize@-$CSectionEntry@$0FAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF2C0 (-Initialize@-$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401ECB30 (-Create@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401ED904 (-Create@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NSInstrumentation::PlatformCreateSection(NSInstrumentation *this)
{
  __int64 v1; // rbx
  int v2; // edi
  int v4; // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+5Ch] [rbp+14h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = (int)this;
  v5 = 0;
  v4 = (int)this;
  Object = 0LL;
  if ( (unsigned int)MmCreateSection(&Object, 983071LL, 0LL, &v4, 4, 0x4000000, 0LL, 0LL) || v4 == v2 && !v5 )
    return Object;
  ObfDereferenceObject(Object);
  return (PVOID)v1;
}
