/*
 * XREFs of ?Destroy@?$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140196800
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14015B318 (-Create@-$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ??1?$CSectionEntry@$0DAAA@$0DA@@NSInstrumentation@@AEAA@XZ @ 0x1401B5EE0 (--1-$CSectionEntry@$0DAAA@$0DA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0BAAA@$0EA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DEDF8 (-Initialize@-$CSectionEntry@$0BAAA@$0EA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BAAA@$0IA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DEEC4 (-Initialize@-$CSectionEntry@$0BAAA@$0IA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0DAAA@$0DA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DEF90 (-Initialize@-$CSectionEntry@$0DAAA@$0DA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0DAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF05C (-Initialize@-$CSectionEntry@$0DAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF128 (-Initialize@-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF1F4 (-Initialize@-$CSectionEntry@$0FAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF2C0 (-Initialize@-$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1401ED878 (-Create@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE7B8 (-Deserialize@-$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEC98 (-Deserialize@-$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<4096,64>::Destroy(PVOID *P)
{
  void *v2; // rdi

  v2 = (void *)((unsigned __int64)P[2] ^ (unsigned __int64)P[3]);
  if ( v2 )
  {
    RtlFindSetBits((PRTL_BITMAP)((unsigned __int64)P[2] ^ (unsigned __int64)P[3]), 1u, 0);
    ExFreePoolWithTag(v2, 0);
  }
  if ( *P )
    ExFreePoolWithTag(*P, 0);
  ExFreePoolWithTag(P, 0);
}
