/*
 * XREFs of VidSchiUpdateDdiHwContextPriorityUnifiedModel @ 0x14009B61C
 * Callers:
 *     VidSchiUpdateDdiHwContextPriority @ 0x14011C670 (VidSchiUpdateDdiHwContextPriority.c)
 * Callees:
 *     ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x140042E3C (-DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERT.c)
 *     McTemplateK0pqqqttt_EtwWriteTransfer @ 0x14004640C (McTemplateK0pqqqttt_EtwWriteTransfer.c)
 */

void __fastcall VidSchiUpdateDdiHwContextPriorityUnifiedModel(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9

  if ( (*(_DWORD *)(a1 + 56) & 0x1000) != 0 )
    return;
  v2 = *(_BYTE *)(a1 + 148) == 0;
  v3 = a1 + 96;
  v4 = *(_QWORD *)(a1 + 8);
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_OWORD *)(a1 + 128) = 0LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v2 )
  {
    v6 = *(unsigned int *)(a1 + 144);
    goto LABEL_17;
  }
  v7 = *(int *)(a1 + 68);
  if ( (_DWORD)v7 == -7 )
    goto LABEL_16;
  v8 = *(_QWORD *)(v4 + 48);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8LL * *(unsigned int *)(v5 + 4));
  if ( *(_BYTE *)(v9 + 5) )
  {
    v6 = *(unsigned int *)(v5 + 216);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v9 + 4) )
  {
    v6 = *(unsigned int *)(v5 + 220);
    goto LABEL_17;
  }
  v10 = *(_DWORD *)(v8 + 24);
  if ( !v10 )
  {
LABEL_16:
    v6 = 0LL;
  }
  else if ( v10 == 5 )
  {
    v6 = (unsigned int)dword_140065308[v7];
  }
  else if ( (*(_DWORD *)(a1 + 76) & 1) != 0 || !*(_DWORD *)(a1 + 80) )
  {
    v6 = 16LL;
  }
  else
  {
    v6 = 1LL;
  }
LABEL_17:
  v11 = (unsigned int)gulPublicPriorityToSchedulingPriority[v6];
  if ( (unsigned int)v11 < 0x1E )
  {
    if ( (unsigned int)v11 < 0x10 )
    {
      if ( (_DWORD)v11 )
      {
        *(_DWORD *)(a1 + 104) = 1;
        v12 = 1LL;
      }
      else
      {
        *(_DWORD *)(a1 + 104) = 0;
        v12 = 0LL;
      }
      goto LABEL_25;
    }
    v12 = 2LL;
  }
  else
  {
    v12 = 3LL;
  }
  *(_DWORD *)(v3 + 8) = v12;
LABEL_25:
  *(_DWORD *)(v3 + 12) = v11;
  if ( (byte_14008A201 & 1) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 24);
    if ( !v13 || (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
      v13 = a1;
    McTemplateK0pqqqttt_EtwWriteTransfer(
      v12,
      v11,
      *(unsigned __int8 *)(v5 + 7077),
      v13,
      *(_DWORD *)(a1 + 144),
      v12,
      v11,
      *(unsigned __int8 *)(v5 + 7076),
      *(unsigned __int8 *)(v5 + 7079),
      *(unsigned __int8 *)(v5 + 7077));
  }
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(a1 + 72);
  *(_QWORD *)v3 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v3 + 24) = 20000LL;
  *(_QWORD *)(v3 + 32) = 10000LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  ADAPTER_RENDER::DdiSetContextSchedulingProperties(
    *(ADAPTER_RENDER **)(*(_QWORD *)(v5 + 16) + 3168LL),
    (const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *)v3);
}
