/*
 * XREFs of ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140163860
 * Callers:
 *     ?ReadKnobFromKey@ExecutionContextCpuKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1401502A0 (-ReadKnobFromKey@ExecutionContextCpuKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKn.c)
 *     ?ReadKnobFromKey@InterfaceProfileKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140163830 (-ReadKnobFromKey@InterfaceProfileKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobS.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x140070010 (WPP_RECORDER_SF_Sd.c)
 *     ?QueryValueUlong64@KRegKey@@QEAAJPEB_WPEA_K@Z @ 0x140137160 (-QueryValueUlong64@KRegKey@@QEAAJPEB_WPEA_K@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1401639B0 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x140163A60 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::ReadKnobFromKey(
        RegistryKnobCollection *this,
        KRegKey *a2,
        const struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  ConfigKnobFlag Flags; // r10d
  unsigned int v5; // eax
  wchar_t *Name; // rdx
  int v11; // ebx
  __int64 v13; // r8
  wchar_t *v14; // rcx
  __int16 v15; // r8
  unsigned __int64 v16; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING v17; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+18h] BYREF

  Flags = a3->Flags;
  v5 = 0;
  v16 = 0LL;
  Name = (wchar_t *)a3->Name;
  if ( (Flags & 4) != 0 )
  {
    v11 = KRegKey::QueryValueUlong64(a2, Name, &v16);
  }
  else
  {
    v18 = 0;
    v17 = 0LL;
    if ( !Name )
      goto LABEL_3;
    v13 = 0x7FFFLL;
    v14 = Name;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
    v11 = -1073741811;
    if ( v13 )
    {
      v11 = 0;
      v15 = 2 * v13;
      v17.Buffer = Name;
      v17.Length = -2 - v15;
      v17.MaximumLength = -v15;
    }
    if ( v11 >= 0 )
    {
LABEL_3:
      v11 = KRegKey::QueryValueUlong(a2, &v17, &v18);
      v5 = v18;
    }
    v16 = v5;
  }
  if ( !v11 )
  {
    v11 = KnobCollection::ValidateKnobValue(this, &v16, a3);
    if ( !v11 )
    {
      *(_QWORD *)a4 = v16;
      return 0LL;
    }
  }
  if ( v11 == -1073741772 )
    return 3221226021LL;
  if ( v11 == -1073741789 || v11 == -1073741788 || v11 == -1073739509 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_5727a9fad38f371d27467642e4002c95_Traceguids,
        a3->Name,
        v11);
    return 3221226021LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_5727a9fad38f371d27467642e4002c95_Traceguids,
      a3->Name,
      v11);
  return (unsigned int)v11;
}
