/*
 * XREFs of FreeNvmeIceEntry @ 0x140070BA0
 * Callers:
 *     AddNvmeIceInterfaceToList @ 0x14007067C (AddNvmeIceInterfaceToList.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x140071D84 (RemoveNvmeIceInterfaceFromList.c)
 *     RaidNvmeIceQuerySupport @ 0x14007A58C (RaidNvmeIceQuerySupport.c)
 *     FreeNvmeIceList @ 0x140187620 (FreeNvmeIceList.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall FreeNvmeIceEntry(PVOID P)
{
  __int64 i; // rsi
  __int64 v3; // r14
  __int64 v4; // rdi
  bool v5; // zf
  _BYTE *v6; // rax
  __int64 v7; // rcx
  _BYTE *j; // rax
  __int64 v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx

  if ( *((_QWORD *)P + 9) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 14); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)P + 9);
      v4 = v3 + 72 * i;
      v5 = (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() == 0;
      v6 = *(_BYTE **)(v4 + 48);
      if ( v5 )
      {
        if ( v6 )
        {
          v7 = *((unsigned __int16 *)v6 + 2);
          for ( j = v6 + 16; v7; --v7 )
            *j++ = 0;
          KeSweepLocalCaches(v7);
          ExFreePoolWithTag(*(PVOID *)(v4 + 48), 0x72436152u);
          *(_QWORD *)(v4 + 48) = 0LL;
        }
      }
      else
      {
        if ( v6 )
        {
          v9 = *(unsigned int *)(v3 + 72 * i + 40);
          if ( *(_DWORD *)(v3 + 72 * i + 40) )
          {
            do
            {
              *v6++ = 0;
              --v9;
            }
            while ( v9 );
          }
          v10 = *(void **)(v4 + 48);
          if ( v10 )
          {
            ExFreePoolWithTag(v10, 0x72436152u);
            *(_QWORD *)(v4 + 48) = 0LL;
          }
        }
        *(_DWORD *)(v3 + 72 * i + 40) = 0;
      }
    }
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      KeSweepLocalCaches(v11);
    ExFreePoolWithTag(*((PVOID *)P + 9), 0x72436152u);
    *((_QWORD *)P + 9) = 0LL;
  }
  IsEnabledDeviceUsageNoInline = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
  v13 = (void *)*((_QWORD *)P + 4);
  if ( !IsEnabledDeviceUsageNoInline )
  {
    ExFreePoolWithTag(v13, 0x53446152u);
    v14 = (void *)*((_QWORD *)P + 5);
LABEL_27:
    ExFreePoolWithTag(v14, 0x72436152u);
    goto LABEL_28;
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0x53446152u);
  v15 = (void *)*((_QWORD *)P + 6);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x72436152u);
  v16 = (void *)*((_QWORD *)P + 5);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x72436152u);
  v14 = (void *)*((_QWORD *)P + 13);
  if ( v14 )
    goto LABEL_27;
LABEL_28:
  ExFreePoolWithTag(P, 0x72436152u);
}
