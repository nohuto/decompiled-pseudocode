/*
 * XREFs of VidSchiUpdateDdiHwContextPriorityLegacyModel @ 0x14012381C
 * Callers:
 *     VidSchiUpdateDdiHwContextPriority @ 0x14011C670 (VidSchiUpdateDdiHwContextPriority.c)
 * Callees:
 *     ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x140042E3C (-DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERT.c)
 *     McTemplateK0pqqqttt_EtwWriteTransfer @ 0x14004640C (McTemplateK0pqqqttt_EtwWriteTransfer.c)
 */

void __fastcall VidSchiUpdateDdiHwContextPriorityLegacyModel(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int8 *v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  int v11; // eax
  __int64 v12; // r9

  if ( (*(_DWORD *)(a1 + 56) & 0x1000) != 0 )
    return;
  v2 = *(_BYTE *)(a1 + 148) == 0;
  v3 = a1 + 96;
  v4 = *(_QWORD *)(a1 + 8);
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_OWORD *)(a1 + 128) = 0LL;
  v5 = *(_QWORD *)(v4 + 48);
  v6 = *(_QWORD *)(v4 + 40);
  if ( v2 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL * *(unsigned int *)(v6 + 4));
    if ( *(_BYTE *)(v9 + 5) )
    {
      v7 = 3LL;
      *(_DWORD *)(v3 + 8) = 3;
      v10 = *(_DWORD *)(v6 + 216);
LABEL_23:
      *(_DWORD *)(v3 + 12) = v10;
      goto LABEL_25;
    }
    if ( *(_BYTE *)(v9 + 4) )
    {
      v7 = 3LL;
      *(_DWORD *)(v3 + 8) = 3;
      v10 = *(_DWORD *)(v6 + 220);
      goto LABEL_23;
    }
    v11 = *(_DWORD *)(v5 + 24);
    if ( v11 )
    {
      if ( v11 == 5 )
      {
        if ( !*(_BYTE *)(v5 + 2632) )
        {
          v7 = 3LL;
          *(_DWORD *)(v3 + 8) = 3;
          v10 = *(_DWORD *)(a1 + 68);
          goto LABEL_23;
        }
        goto LABEL_18;
      }
      if ( (*(_DWORD *)(a1 + 76) & 1) != 0 )
      {
LABEL_18:
        v7 = 2LL;
        *(_DWORD *)(v3 + 8) = 2;
LABEL_25:
        v8 = (unsigned __int8 *)(v6 + 7079);
        if ( *(_BYTE *)(v6 + 7079) && *(_DWORD *)(a1 + 68) == -7 )
        {
          *(_QWORD *)(v3 + 8) = 0LL;
          v7 = 0LL;
        }
        goto LABEL_28;
      }
      if ( *(_DWORD *)(a1 + 68) != -7 )
      {
        *(_DWORD *)(a1 + 104) = 1;
        v7 = 1LL;
        goto LABEL_25;
      }
    }
    v7 = 0LL;
    *(_DWORD *)(v3 + 8) = 0;
    goto LABEL_25;
  }
  v7 = (unsigned int)gulPublicPriorityToSchedulingPriority[*(unsigned int *)(a1 + 144)];
  if ( (unsigned int)v7 <= 0x10 )
  {
    if ( (_DWORD)v7 == 16 )
    {
      v7 = 2LL;
      *(_DWORD *)(v3 + 8) = 2;
    }
    else if ( (_DWORD)v7 )
    {
      *(_DWORD *)(v3 + 8) = 1;
      v7 = 1LL;
    }
    else
    {
      *(_DWORD *)(v3 + 8) = 0;
    }
  }
  else
  {
    v7 = 3LL;
    *(_DWORD *)(v3 + 8) = 3;
    *(_DWORD *)(v3 + 12) = *(_DWORD *)(a1 + 144);
  }
  v8 = (unsigned __int8 *)(v6 + 7079);
LABEL_28:
  if ( (byte_14008A201 & 1) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 24);
    if ( !v12 || (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
      v12 = a1;
    McTemplateK0pqqqttt_EtwWriteTransfer(
      v7,
      *(unsigned __int8 *)(v6 + 7076),
      *(unsigned __int8 *)(v6 + 7077),
      v12,
      *(_DWORD *)(a1 + 144),
      v7,
      *(_DWORD *)(v3 + 12),
      *(unsigned __int8 *)(v6 + 7076),
      *v8,
      *(unsigned __int8 *)(v6 + 7077));
  }
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(a1 + 72);
  *(_QWORD *)v3 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v3 + 24) = 20000LL;
  *(_QWORD *)(v3 + 32) = 10000LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  ADAPTER_RENDER::DdiSetContextSchedulingProperties(
    *(ADAPTER_RENDER **)(*(_QWORD *)(v6 + 16) + 3168LL),
    (const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *)v3);
}
