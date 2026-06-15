/*
 * XREFs of _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x18000CEE8
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18000E450 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18003557C (CEndpointCharacteristics--GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     _lambda_2d57628cd8490ef0d12835f9ba011710_::operator() @ 0x18007BAEC (_lambda_2d57628cd8490ef0d12835f9ba011710_--operator().c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18013261C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02__.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000D0A0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

char __fastcall lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()(__int64 *a1, const struct tWAVEFORMATEX *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  GUID v6; // xmm0
  __int64 v7; // r10
  __int64 v8; // r10
  int v9; // ecx
  char v10; // si
  _QWORD *v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // r15
  _QWORD *v15; // rcx
  __int64 v16; // rax
  const struct tWAVEFORMATEX ***v17; // rbx
  const struct tWAVEFORMATEX ***v18; // r14
  int i; // eax
  _QWORD *v21; // r8
  __int64 v22; // rcx

  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 1888);
  if ( *((_DWORD *)a1 + 2) == 3 )
  {
    if ( v4 > 3 )
    {
      v5 = *(_QWORD *)(v3 + 1896) + 72LL;
      goto LABEL_4;
    }
LABEL_38:
    _o_terminate(a1, a2, v4);
    __debugbreak();
    JUMPOUT(0x18000D090LL);
  }
  if ( !v4 )
    goto LABEL_38;
  v5 = *(_QWORD *)(v3 + 1896);
LABEL_4:
  v6 = *(GUID *)((char *)a1 + 12);
  v7 = 296LL;
  if ( *((_DWORD *)a1 + 2) != 3 )
    v7 = 272LL;
  v8 = *(_QWORD *)(v3 + 1584) + v7;
  v9 = 0;
  v10 = 1;
  while ( v9 < *(_DWORD *)(v5 + 16) )
  {
    v11 = (_QWORD *)(*(_QWORD *)v5 + 16LL * v9);
    v12 = *v11 - *(_QWORD *)&v6.Data1;
    if ( *v11 == *(_QWORD *)&v6.Data1 )
      v12 = v11[1] - *(_QWORD *)v6.Data4;
    if ( !v12 )
    {
      if ( v9 != -1 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_DWORD *)(v5 + 16) )
            goto LABEL_36;
          v21 = (_QWORD *)(*(_QWORD *)v5 + 16LL * i);
          v22 = *v21 - *(_QWORD *)&v6.Data1;
          if ( *v21 == *(_QWORD *)&v6.Data1 )
            v22 = v21[1] - *(_QWORD *)v6.Data4;
          if ( !v22 )
            break;
        }
        if ( i == -1 )
        {
LABEL_36:
          v6 = GUID_00000000_0000_0000_0000_000000000000;
          break;
        }
        if ( i < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v5);
          __debugbreak();
        }
        v6 = *(GUID *)(*(_QWORD *)(v5 + 8) + 16LL * i);
      }
      break;
    }
    ++v9;
  }
  v13 = *(_QWORD **)v8;
  v14 = *(_QWORD **)(v8 + 8);
  while ( v13 != v14 )
  {
    v15 = (_QWORD *)*v13;
    v16 = *(_QWORD *)*v13 - *(_QWORD *)&v6.Data1;
    if ( !v16 )
      v16 = v15[1] - *(_QWORD *)v6.Data4;
    if ( !v16 )
    {
      v17 = (const struct tWAVEFORMATEX ***)v15[2];
      v18 = (const struct tWAVEFORMATEX ***)v15[3];
      while ( v17 != v18 )
      {
        if ( (unsigned int)CompareWaveFormat(a2, **v17) )
          return v10;
        ++v17;
      }
    }
    ++v13;
  }
  return 0;
}
