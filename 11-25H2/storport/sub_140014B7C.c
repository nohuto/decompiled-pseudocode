/*
 * XREFs of sub_140014B7C @ 0x140014B7C
 * Callers:
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_140098900 @ 0x140098900 (sub_140098900.c)
 *     sub_140099180 @ 0x140099180 (sub_140099180.c)
 *     sub_14009DD50 @ 0x14009DD50 (sub_14009DD50.c)
 *     sub_14009F87C @ 0x14009F87C (sub_14009F87C.c)
 *     sub_14009FFCC @ 0x14009FFCC (sub_14009FFCC.c)
 *     DoScreenSave_0 @ 0x1400A0338 (DoScreenSave_0.c)
 *     sub_1400A070C @ 0x1400A070C (sub_1400A070C.c)
 * Callees:
 *     sub_140015988 @ 0x140015988 (sub_140015988.c)
 */

PIRP __fastcall sub_140014B7C(__int64 a1, ULONG_PTR a2, __int64 a3, struct _IO_STATUS_BLOCK *a4)
{
  PIRP result; // rax
  IRP *v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v9; // ecx
  void *v10; // r10
  ULONG v11; // edx
  unsigned int v12; // ebp
  PMDL Mdl; // rax
  __int64 v14; // rdx

  result = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
  v7 = result;
  if ( result )
  {
    CurrentStackLocation = result->Tail.Overlay.CurrentStackLocation;
    result->Tail.Overlay.Thread = KeGetCurrentThread();
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 15;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = *(void **)(a2 + 64);
      v11 = *(_DWORD *)(a2 + 60);
    }
    else
    {
      v9 = *(_DWORD *)(a2 + 12);
      v10 = *(void **)(a2 + 24);
      v11 = *(_DWORD *)(a2 + 16);
    }
    if ( (v9 & 0xC0) == 0xC0 )
    {
      v12 = 2;
    }
    else if ( (v9 & 0x40) != 0 )
    {
      v12 = 1;
    }
    else
    {
      v12 = ((v9 & 0x80u) != 0) - 1;
    }
    if ( !v11 )
      goto LABEL_10;
    Mdl = IoAllocateMdl(v10, v11, 0, 0, 0LL);
    v7->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( (int)sub_140015988(Mdl, v14, v12) >= 0 )
      {
LABEL_10:
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
        v7->UserEvent = 0LL;
        v7->UserIosb = a4;
        return v7;
      }
      IoFreeMdl(v7->MdlAddress);
      v7->MdlAddress = 0LL;
    }
    IoFreeIrp(v7);
    return 0LL;
  }
  return result;
}
