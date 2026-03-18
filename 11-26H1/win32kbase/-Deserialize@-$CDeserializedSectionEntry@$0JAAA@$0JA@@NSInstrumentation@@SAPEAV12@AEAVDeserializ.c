/*
 * XREFs of ?Deserialize@?$CDeserializedSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE8F0
 * Callers:
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF0E4 (-Deserialize@-$CDeserializedTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDe.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A37C (-Destroy@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015AA00 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14015ABBC (-Create@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ??$Deserialize@I@Deserializer@NSInstrumentation@@QEAA_NAEAI@Z @ 0x1401EE1EC (--$Deserialize@I@Deserializer@NSInstrumentation@@QEAA_NAEAI@Z.c)
 *     ?DeserializeBytes@Deserializer@NSInstrumentation@@QEAA_NPEAX_K@Z @ 0x1401EF618 (-DeserializeBytes@Deserializer@NSInstrumentation@@QEAA_NPEAX_K@Z.c)
 *     ?Destroy@?$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF65C (-Destroy@-$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF688 (-Destroy@-$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

_QWORD *__fastcall NSInstrumentation::CDeserializedSectionEntry<36864,144>::Deserialize(
        NSInstrumentation::Deserializer *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  void *Pool2; // rax
  _QWORD *v7; // r14
  _DWORD *v8; // rax
  _DWORD *v9; // rsi
  __int64 v10; // r9

  v2 = NSInstrumentation::CSectionEntry<36864,144>::Create();
  v3 = v2;
  if ( v2 )
  {
    v4 = (void *)v2[3];
    if ( v4 )
    {
      MmUnmapViewInSessionSpace(v4);
      v3[3] = 0LL;
    }
    v5 = (void *)v3[2];
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      v3[2] = 0LL;
    }
    Pool2 = (void *)ExAllocatePool2(258LL, 36864LL, 1869834581LL);
    v3[3] = Pool2;
    if ( Pool2 && NSInstrumentation::Deserializer::DeserializeBytes(this, Pool2, 0x9000uLL) )
    {
      v7 = v3 + 4;
      NSInstrumentation::CSectionBitmapAllocator<81920,160>::Destroy((PVOID)v3[4]);
      v8 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Create(v3[3]);
      v9 = v8;
      if ( v8 )
      {
        if ( NSInstrumentation::Deserializer::Deserialize<unsigned int>((__int64)this, v8 + 8)
          && NSInstrumentation::Deserializer::Deserialize<unsigned int>((__int64)this, v9 + 9)
          && NSInstrumentation::Deserializer::DeserializeBytes(this, *(void **)(v10 + 8), 0x20uLL) )
        {
          *v7 = v9;
          return v3;
        }
        NSInstrumentation::CDeserializedSectionBitmapAllocator<32768,128>::Destroy(v9);
      }
      *v7 = 0LL;
    }
    NSInstrumentation::CDeserializedSectionEntry<49152,192>::Destroy(v3);
  }
  return 0LL;
}
