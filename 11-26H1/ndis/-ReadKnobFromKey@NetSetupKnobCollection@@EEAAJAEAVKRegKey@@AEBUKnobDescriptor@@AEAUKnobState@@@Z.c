/*
 * XREFs of ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140150540
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015FCA0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015FEF0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1401601E0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x140163A60 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 */

__int64 __fastcall NetSetupKnobCollection::ReadKnobFromKey(
        NetSetupKnobCollection *this,
        struct KRegKey *a2,
        const struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  bool v4; // zf
  const wchar_t *Name; // rdi
  __int128 v9; // xmm0
  int v10; // eax
  ConfigKnobFlag Flags; // eax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  bool v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-3Ch] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  struct KRegKey *v18; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+38h] [rbp-28h] BYREF
  int v20; // [rsp+48h] [rbp-18h]

  v4 = a2->m_ptr == 0LL;
  v17 = 0LL;
  if ( v4 )
    return 3221226021LL;
  Name = a3->Name;
  v18 = a2;
  if ( _wcsicmp(Name, L"NETSETUPPKEY_Operational_ExecutionContextProfile") )
  {
    if ( !_wcsicmp(Name, L"NETSETUPPKEY_Operational_ExecutionContextProfileSource") )
    {
      v9 = NETSETUPPKEY_Operational_ExecutionContextProfileSource;
      v10 = 402;
      goto LABEL_6;
    }
    return 3221226021LL;
  }
  v9 = NETSETUPPKEY_Operational_ExecutionContextProfile;
  v10 = 400;
LABEL_6:
  v20 = v10;
  Flags = a3->Flags;
  v19 = v9;
  if ( (Flags & 4) != 0 )
  {
    v12 = NetSetupPropertyBag::ReadUint64((NetSetupPropertyBag *)&v18, (const struct _NETSETUPPROPKEY *)&v19, &v17);
  }
  else
  {
    if ( (Flags & 2) != 0 )
    {
      v15 = 0;
      v12 = NetSetupPropertyBag::ReadBoolean((NetSetupPropertyBag *)&v18, (const struct _NETSETUPPROPKEY *)&v19, &v15);
      v13 = v15;
    }
    else
    {
      v16 = 0;
      v12 = NetSetupPropertyBag::ReadUint32((NetSetupPropertyBag *)&v18, (const struct _NETSETUPPROPKEY *)&v19, &v16);
      v13 = v16;
    }
    v17 = v13;
  }
  if ( !v12 )
  {
    v12 = KnobCollection::ValidateKnobValue(this, &v17, a3);
    if ( !v12 )
      *(_QWORD *)a4 = v17;
  }
  return v12;
}
