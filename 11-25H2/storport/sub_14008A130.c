/*
 * XREFs of sub_14008A130 @ 0x14008A130
 * Callers:
 *     sub_1400392B0 @ 0x1400392B0 (sub_1400392B0.c)
 *     sub_14003BB30 @ 0x14003BB30 (sub_14003BB30.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14008A130(__int64 a1, IRP *a2, _BYTE *a3, _BYTE *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  struct _IRP *MasterIrp; // rdi
  unsigned int *v7; // r14
  __int64 v11; // rbp
  bool v12; // zf
  int Information; // eax
  bool v14; // cf
  __int64 v15; // rax
  unsigned int v16; // eax
  void *v17; // rcx
  char *v18; // r15
  void *v19; // rax
  void *v20; // rbp
  __int64 v21; // rcx
  int *v22; // rcx
  int v23; // ecx

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v7 = 0LL;
  if ( *(_DWORD *)v4 == 1431193940 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    if ( *(_DWORD *)v4 != 1094997074 )
      return (unsigned int)-1073741811;
    v11 = 0LL;
  }
  v12 = LODWORD(MasterIrp->MdlAddress) == 3;
  *a3 = 0;
  *a4 = 0;
  if ( v12 )
  {
    Information = MasterIrp->IoStatus.Information;
    if ( Information == 1 )
    {
      v14 = (unsigned __int8)LODWORD(MasterIrp->UserEvent) < 0xC0u;
    }
    else
    {
      if ( Information != 2 )
        goto LABEL_12;
      v14 = (unsigned __int8)LODWORD(MasterIrp->UserEvent) < 0x80u;
    }
    if ( v14 )
      return v5;
LABEL_12:
    if ( (*(_BYTE *)(v4 + 108) & 0x20) == 0 )
      goto LABEL_26;
    v15 = sub_1400143E0(64LL, 4176LL, 1918067026LL, a1);
    v7 = (unsigned int *)v15;
    if ( !v15 )
    {
      MasterIrp->Flags = 7;
      return (unsigned int)-1073741670;
    }
    *(_DWORD *)v15 = 28;
    *(_DWORD *)(v15 + 16) = 2954240;
    *(_QWORD *)(v15 + 4) = 0x4C4F434F544F5250LL;
    if ( v11 )
      v16 = *(_DWORD *)(v11 + 1392);
    else
      v16 = *(_DWORD *)(v4 + 4124);
    v7[3] = v16;
    v7[6] = 4148;
    v7[12] = 0;
    v7[7] = 48;
    v7[8] = 48;
    v7[9] = 3;
    v7[10] = 2;
    v7[11] = 5;
    v7[13] = 44;
    v7[14] = 4096;
    v5 = sub_140016234((CMSPAddress *)v4, a2, v7, 0x1050u, 0LL, 0, 64, 0);
    if ( (v5 & 0x80000000) == 0 )
    {
      v17 = *(void **)(v4 + 5384);
      v18 = (char *)v7 + v7[13] + 36;
      if ( !v17 )
      {
        v19 = (void *)sub_1400143E0(66LL, 4096LL, 1162043730LL, *(_QWORD *)(v4 + 8));
        v20 = v19;
        if ( !v19 )
        {
          MasterIrp->Flags = 7;
          v5 = -1073741670;
          goto LABEL_40;
        }
        memmove(v19, v18, 0x1000uLL);
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 5384), (signed __int64)v20, 0LL) )
          goto LABEL_25;
        ExFreePoolWithTag(v20, 0x45436152u);
        v17 = *(void **)(v4 + 5384);
      }
      memmove(v17, v18, 0x1000uLL);
    }
LABEL_25:
    *(_BYTE *)(v4 + 108) &= ~0x20u;
LABEL_26:
    v21 = *(_QWORD *)(v4 + 5384);
    if ( v21 )
    {
      v22 = (int *)(v21 + 4LL * (unsigned __int8)LODWORD(MasterIrp->UserEvent));
      if ( LODWORD(MasterIrp->IoStatus.Information) != 1 )
        v22 += 256;
      v23 = *v22;
      if ( (v23 & 1) != 0 )
      {
        if ( (v23 & 0x18) != 0 || (v23 & 0x70000) == 0x20000 )
        {
          *a3 = 1;
        }
        else if ( (v23 & 4) != 0 || (v23 & 0x70000) == 0x10000 )
        {
          *a4 = 1;
        }
LABEL_39:
        if ( !v7 )
          return v5;
LABEL_40:
        ExFreePoolWithTag(v7, 0x72536152u);
        return v5;
      }
    }
    else if ( (unsigned __int8)LODWORD(MasterIrp->UserEvent) == 0x80 )
    {
      v5 = 0;
      goto LABEL_39;
    }
    MasterIrp->Flags = 3;
    v5 = -1073741808;
    goto LABEL_39;
  }
  return (unsigned int)-1056964602;
}
