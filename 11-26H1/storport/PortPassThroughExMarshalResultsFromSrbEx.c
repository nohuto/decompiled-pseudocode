/*
 * XREFs of PortPassThroughExMarshalResultsFromSrbEx @ 0x14003B4BC
 * Callers:
 *     PortpCompleteRequestIrp @ 0x14003B1EC (PortpCompleteRequestIrp.c)
 * Callees:
 *     PortPassThroughExApplyNormalizedRequest @ 0x14012FE24 (PortPassThroughExApplyNormalizedRequest.c)
 *     PortPassThroughExNormalize @ 0x14012FF14 (PortPassThroughExNormalize.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

void __fastcall PortPassThroughExMarshalResultsFromSrbEx(PIRP Irp, __int64 a2, char a3, __int64 a4)
{
  _IRP *MasterIrp; // rax
  unsigned int v9; // r10d
  unsigned __int64 v10; // rsi
  unsigned int *Pool2; // rax
  unsigned __int8 *v12; // rdi
  int v13; // ebx
  __int64 v14; // r8
  unsigned __int8 v15; // r14
  int v16; // r10d
  const void *v17; // r9
  unsigned int Length; // r11d
  __int64 v19; // rax
  int v20; // ecx
  unsigned __int8 v21; // dl
  char *v22; // rcx
  unsigned __int8 v23; // cl
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // [rsp+50h] [rbp+8h]

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  *(_QWORD *)(a4 + 8) = 0LL;
  v9 = LODWORD(MasterIrp->MdlAddress) + 63;
  if ( v9 < 0x40 )
  {
    v13 = -1073741675;
    goto LABEL_38;
  }
  v10 = v9;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, v9, 1766878288LL);
  v12 = (unsigned __int8 *)Pool2;
  if ( Pool2 )
  {
    v13 = PortPassThroughExNormalize(Pool2, Irp);
    if ( v13 < 0 )
    {
LABEL_36:
      ExFreePoolWithTag(v12, 0x69506C50u);
      goto LABEL_38;
    }
    v15 = 0;
    v16 = *(_DWORD *)a4;
    LOBYTE(v14) = 0;
    v17 = 0LL;
    Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    v19 = *(unsigned int *)(a2 + 120);
    v26 = Length;
    v20 = *(_DWORD *)(v19 + a2);
    if ( v20 == 64 || v20 == 65 )
    {
      v17 = *(const void **)(v19 + a2 + 16);
    }
    else
    {
      if ( v20 != 66 )
      {
LABEL_11:
        v12[16] = v15;
        if ( *(char *)(a2 + 3) >= 0 )
        {
          v12[17] = 0;
          v21 = 0;
        }
        else
        {
          v21 = v12[17];
          if ( v21 )
          {
            v22 = (char *)Irp->AssociatedIrp.MasterIrp + *((unsigned int *)v12 + 7);
            if ( v22 )
            {
              v12[17] = v14;
              memmove(v22, v17, (unsigned __int8)v14);
              v21 = v12[17];
              Length = v26;
            }
          }
          v16 = 0;
        }
        v13 = 0;
        v23 = v12[18];
        v24 = *(_DWORD *)(a2 + 60);
        if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 0x12 )
          v13 = v16;
        if ( v23 == 1 )
        {
          *((_DWORD *)v12 + 9) = v24;
        }
        else
        {
          *((_DWORD *)v12 + 8) = v24;
          if ( v23 == 3 && v24 && *((_DWORD *)v12 + 9) )
            *((_DWORD *)v12 + 9) = *(_DWORD *)(*(unsigned int *)(a2 + 124) + a2 + 8);
        }
        if ( v21 )
        {
          v10 = (unsigned int)v21 + *((_DWORD *)v12 + 7);
        }
        else if ( v13 < 0 && v15 )
        {
          v13 = 0;
          v10 = 8LL;
        }
        if ( !a3 )
        {
          v25 = *((_QWORD *)v12 + 6);
          if ( v25 )
            v10 = v25 + *((unsigned int *)v12 + 9);
        }
        if ( v10 >= Length )
          v10 = Length;
        *(_QWORD *)(a4 + 8) = v10;
        PortPassThroughExApplyNormalizedRequest(v12, Irp, v14, v17);
        goto LABEL_36;
      }
      v17 = *(const void **)(v19 + a2 + 24);
    }
    v15 = *(_BYTE *)(v19 + a2 + 8);
    LOBYTE(v14) = *(_BYTE *)(v19 + a2 + 9);
    goto LABEL_11;
  }
  v13 = -1073741670;
LABEL_38:
  *(_DWORD *)a4 = v13;
}
