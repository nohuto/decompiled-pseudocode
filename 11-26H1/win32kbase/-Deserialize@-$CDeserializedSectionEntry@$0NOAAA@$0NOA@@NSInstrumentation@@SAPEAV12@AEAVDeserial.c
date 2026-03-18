/*
 * XREFs of ?Deserialize@?$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEC98
 * Callers:
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF360 (-Deserialize@-$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAV.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140196800 (-Destroy@-$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1401ED878 (-Create@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401ED904 (-Create@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??$Deserialize@I@Deserializer@NSInstrumentation@@QEAA_NAEAI@Z @ 0x1401EE1EC (--$Deserialize@I@Deserializer@NSInstrumentation@@QEAA_NAEAI@Z.c)
 *     ?DeserializeBytes@Deserializer@NSInstrumentation@@QEAA_NPEAX_K@Z @ 0x1401EF618 (-DeserializeBytes@Deserializer@NSInstrumentation@@QEAA_NPEAX_K@Z.c)
 *     ?Destroy@?$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF65C (-Destroy@-$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF6DC (-Destroy@-$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

PVOID **__fastcall NSInstrumentation::CDeserializedSectionEntry<909312,3552>::Deserialize(
        NSInstrumentation::Deserializer *this)
{
  PVOID **v2; // rax
  PVOID **v3; // rdi
  PVOID *v4; // rcx
  PVOID *v5; // rcx
  PVOID *Pool2; // rax
  PVOID **v7; // r14
  PVOID *v8; // rax
  PVOID *v9; // rsi
  __int64 v10; // r9

  v2 = (PVOID **)NSInstrumentation::CSectionEntry<909312,3552>::Create();
  v3 = v2;
  if ( v2 )
  {
    v4 = v2[3];
    if ( v4 )
    {
      MmUnmapViewInSessionSpace(v4);
      v3[3] = 0LL;
    }
    v5 = v3[2];
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      v3[2] = 0LL;
    }
    Pool2 = (PVOID *)ExAllocatePool2(258LL, 909312LL, 1869834581LL);
    v3[3] = Pool2;
    if ( Pool2 && NSInstrumentation::Deserializer::DeserializeBytes(this, Pool2, 0xDE000uLL) )
    {
      v7 = v3 + 4;
      NSInstrumentation::CSectionBitmapAllocator<4096,64>::Destroy(v3[4]);
      v8 = NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Create((__int64)v3[3]);
      v9 = v8;
      if ( v8 )
      {
        if ( NSInstrumentation::Deserializer::Deserialize<unsigned int>((__int64)this, (_DWORD *)v8 + 8)
          && NSInstrumentation::Deserializer::Deserialize<unsigned int>((__int64)this, (_DWORD *)v9 + 9)
          && NSInstrumentation::Deserializer::DeserializeBytes(this, *(void **)(v10 + 8), 0x1CuLL) )
        {
          *v7 = v9;
          return v3;
        }
        NSInstrumentation::CDeserializedSectionBitmapAllocator<32768,128>::Destroy(v9);
      }
      *v7 = 0LL;
    }
    NSInstrumentation::CDeserializedSectionEntry<32768,128>::Destroy(v3);
  }
  return 0LL;
}
