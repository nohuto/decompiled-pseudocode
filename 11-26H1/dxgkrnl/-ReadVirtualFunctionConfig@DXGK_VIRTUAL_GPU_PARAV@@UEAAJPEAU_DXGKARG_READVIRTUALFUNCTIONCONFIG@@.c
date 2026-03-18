/*
 * XREFs of ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x140404C00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpReadDeviceSpace @ 0x14004DE30 (DpReadDeviceSpace.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ReadVirtualFunctionConfig(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIG *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 Offset; // rcx
  _BYTE *Data; // r14
  unsigned int i; // edi
  ULONG v9; // edx
  ULONG Length; // edx
  size_t v11; // r8
  char *v12; // rdx
  ULONG v14; // edx
  ULONG v15; // edx
  __int64 v16; // rdx
  ULONG v17; // edx
  __int64 VirtualFunctionIndex; // rax
  _BYTE v19[160]; // [rsp+0h] [rbp-118h] BYREF
  ULONG v20; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-40h]
  __int64 v22; // [rsp+E0h] [rbp-38h]

  v4 = 0;
  if ( !g_PciConfig.VendorID )
  {
    dword_1401682E2 = 458894;
    g_PciConfig.VendorID = 5140;
    dword_1401682E6 = 16;
    dword_1401682EA = 770;
    word_1401682EE = 0;
    qword_1401682F0 = 0LL;
    qword_1401682F8 = 0LL;
    qword_140168300 = 0LL;
    dword_140168308 = 0;
    qword_14016830C = 0LL;
    qword_140168314 = 64LL;
    dword_14016831C = 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL);
  Offset = a2->Offset;
  if ( (unsigned int)Offset >= 0xC0 )
  {
    Length = a2->Length;
    if ( Length + (unsigned int)Offset > 0xD0 )
    {
      if ( (unsigned int)Offset < 0xD0 )
        goto LABEL_4;
      v14 = a2->Length;
      if ( v14 + (unsigned int)Offset > 0xD4 )
      {
        if ( (unsigned int)Offset < 0xD4 )
          goto LABEL_4;
        v15 = a2->Length;
        if ( v15 + (unsigned int)Offset > 0xDC )
        {
          if ( (unsigned int)Offset < 0xDC )
            goto LABEL_4;
          v17 = a2->Length;
          if ( v17 + (unsigned int)Offset > 0xE0 )
            goto LABEL_4;
          v11 = v17;
          v16 = Offset + 164;
        }
        else
        {
          v11 = v15;
          v16 = Offset - 184;
        }
        v12 = (char *)this + v16;
      }
      else
      {
        v11 = v14;
        v20 = 45;
        v12 = &v19[Offset];
      }
    }
    else
    {
      v11 = Length;
      v21 = *(_QWORD *)((char *)this + 28);
      v12 = &v19[Offset + 24];
      v22 = 0LL;
    }
    memmove(a2->Data, v12, v11);
    return v4;
  }
LABEL_4:
  Data = a2->Data;
  for ( i = 0; i < a2->Length; ++i )
  {
    v9 = i + a2->Offset;
    if ( v9 >= 0x100 )
    {
      Data[i] = 0;
    }
    else if ( v9 >= 4 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 444LL) & 4) != 0 )
    {
      Data[i] = *((_BYTE *)&g_PciConfig.VendorID + v9);
    }
    else
    {
      v20 = 0;
      v4 = DpReadDeviceSpace(v5, 0LL, &Data[i], v9, 1u, &v20);
      if ( (v4 & 0x80000000) != 0 || v20 != 1 )
      {
        WdLogSingleEntry1(2LL);
        VirtualFunctionIndex = a2->VirtualFunctionIndex;
        WdLogGlobalForLineNumber = 137;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to read PCI config space: %I64n",
          VirtualFunctionIndex,
          0LL,
          0LL,
          0LL,
          0LL);
        return v4;
      }
    }
  }
  return v4;
}
