/*
 * XREFs of sub_14003B2E8 @ 0x14003B2E8
 * Callers:
 *     sub_1401B2CE0 @ 0x1401B2CE0 (sub_1401B2CE0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_1400B0394 @ 0x1400B0394 (sub_1400B0394.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14003B2E8(__int64 a1, IRP *a2, _QWORD *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // r15
  size_t Length; // rbp
  __int64 v9; // rax
  unsigned int *v10; // r14
  int v11; // eax
  int v12; // esi
  unsigned int *v13; // rcx
  unsigned int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // rbx
  int v18; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *a3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 8 )
  {
    return (unsigned int)-1073741585;
  }
  else if ( (unsigned int)Length < 0x38 )
  {
    if ( (unsigned int)Length < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *(_DWORD *)&MasterIrp->Type = 56;
      *(_DWORD *)(&MasterIrp->Size + 1) = 56;
      v12 = 0;
      *a3 = 8LL;
    }
  }
  else if ( (unsigned int)Length >= 0xFFFFFFE4 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v9 = sub_1400143E0(64LL, (unsigned int)(Length + 28), 1918067026LL, *(_QWORD *)(a1 + 8));
    v10 = (unsigned int *)v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = 28;
      *(_DWORD *)(v9 + 16) = 2954240;
      *(_QWORD *)(v9 + 4) = 0x59474F4C4F504F54LL;
      *(_DWORD *)(v9 + 12) = 60;
      *(_DWORD *)(v9 + 24) = Length;
      *(_DWORD *)(v9 + 28) = 56;
      *(_DWORD *)(v9 + 32) = Length;
      v11 = sub_140016234((CMSPAddress *)a1, a2, (unsigned int *)v9, (int)Length + 28, 0LL, 0, 64, 0);
      v12 = v11;
      if ( v11 >= 0 || (v13 = v10, v11 == -2147483643) )
      {
        v15 = v10[8];
        memset_0(MasterIrp, 0, Length);
        v16 = Length;
        if ( (unsigned int)Length >= v15 )
          v16 = v15;
        v17 = v16;
        memmove(MasterIrp, v10 + 7, v16);
        *(_DWORD *)&MasterIrp->Type = 56;
        v13 = v10;
        *a3 = v17;
        if ( v12 >= 0 )
        {
          v18 = *(_DWORD *)(a1 + 5344);
          if ( (v18 & 1) == 0 && *(_DWORD *)(&MasterIrp->Size + 1) <= (unsigned int)Length )
          {
            *(_DWORD *)(a1 + 5344) = v18 | 1;
            sub_1400B0394(a1, MasterIrp, (unsigned int)Length);
            v13 = v10;
          }
        }
      }
      ExFreePoolWithTag(v13, 0x72536152u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v12;
}
