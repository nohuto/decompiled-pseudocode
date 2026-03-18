/*
 * XREFs of HUBDRIVER_EtwRundownHub @ 0x140079248
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x140079008 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x140001AC8 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FC4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x14000202C (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pqun_EtwWriteTransfer @ 0x1400020A8 (McTemplateK0pqun_EtwWriteTransfer.c)
 *     McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer @ 0x140002138 (McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1400023B4 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 */

__int64 __fastcall HUBDRIVER_EtwRundownHub(const GUID *a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // rdi
  char v9; // dl
  int v10; // eax
  char v11; // bp
  char v12; // r14
  int v13; // eax
  int v14; // eax
  const char *v15; // r15
  const char *v16; // r13
  const char *v17; // r12
  char v18; // r8
  char v19; // r9
  char v20; // r10
  char v21; // r11
  int v22; // eax
  const char *v23; // r8
  const char *v24; // r9
  const char *v25; // r10
  char v26; // r11
  char v27; // r15
  char v28; // r12
  char v29; // r13
  __int64 v30; // rdx
  void *Pool2; // rax
  void *v32; // rbp
  __int64 v33; // [rsp+20h] [rbp-108h]
  __int64 v34; // [rsp+28h] [rbp-100h]
  int v35; // [rsp+C0h] [rbp-68h]
  int v36; // [rsp+C0h] [rbp-68h]
  int v37; // [rsp+C4h] [rbp-64h]
  int v38; // [rsp+C4h] [rbp-64h]
  int v39; // [rsp+C8h] [rbp-60h]
  int v40; // [rsp+C8h] [rbp-60h]
  int v41; // [rsp+CCh] [rbp-5Ch]
  int v42; // [rsp+CCh] [rbp-5Ch]
  int v43; // [rsp+D0h] [rbp-58h]
  int v44; // [rsp+D0h] [rbp-58h]
  void *Src[2]; // [rsp+D8h] [rbp-50h] BYREF
  char v46; // [rsp+138h] [rbp+10h]
  char v47; // [rsp+138h] [rbp+10h]
  char v48; // [rsp+140h] [rbp+18h]
  char v49; // [rsp+140h] [rbp+18h]
  __int16 v50; // [rsp+148h] [rbp+20h]
  __int16 v51; // [rsp+148h] [rbp+20h]

  v4 = *(_DWORD *)(a2 + 2232) - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 2 && (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer(
          (__int64)a1,
          &USBHUB3_ETW_EVENT_RUNDOWN_ROOT_HUB_INFORMATION,
          a1,
          *(_QWORD *)(a2 + 248),
          *(_DWORD *)(a2 + 2616));
    }
    else if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
    {
      McTemplateK0pnq_EtwWriteTransfer(
        a2 + 1196,
        &USBHUB3_ETW_EVENT_RUNDOWN_USB30_HUB_INFORMATION,
        a1,
        *(_QWORD *)(a2 + 248),
        12,
        a2 + 1196,
        *(_DWORD *)(a2 + 2616));
    }
  }
  else if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
  {
    McTemplateK0pnq_EtwWriteTransfer(
      a2 + 1196,
      &USBHUB3_ETW_EVENT_RUNDOWN_USB20_HUB_INFORMATION,
      a1,
      *(_QWORD *)(a2 + 248),
      71,
      a2 + 1196,
      *(_DWORD *)(a2 + 2616));
  }
  v6 = a2 + 2376;
  result = *(_QWORD *)(a2 + 2376);
  v8 = result - 248;
  if ( a2 + 2376 != result )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(v8 + 204);
      if ( (v10 & 2) != 0 )
      {
        v11 = 1;
        if ( (v10 & 0x1000) != 0 && (*(_DWORD *)(a2 + 44) & 0x200) != 0 )
        {
          v12 = 1;
          goto LABEL_18;
        }
      }
      else
      {
        v11 = 0;
      }
      v12 = 0;
LABEL_18:
      v13 = *(_DWORD *)(v8 + 1256);
      if ( v13 == 3000 )
      {
        if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
        {
          v22 = *(_DWORD *)(a2 + 168);
          if ( v22 == 2 )
          {
            v23 = (const char *)(a2 + 186);
            v24 = (const char *)(a2 + 181);
            v25 = (const char *)(a2 + 176);
            goto LABEL_35;
          }
          v23 = 0LL;
          v24 = 0LL;
          v25 = 0LL;
          if ( v22 == 1 )
          {
            v51 = *(_WORD *)(a2 + 184);
            v44 = *(_DWORD *)(a2 + 180);
            v42 = *(_DWORD *)(a2 + 176);
            v40 = *(_DWORD *)(a2 + 196);
            v38 = *(_DWORD *)(a2 + 192);
            v36 = *(_DWORD *)(a2 + 188);
          }
          else
          {
LABEL_35:
            LOBYTE(v51) = 0;
            LOBYTE(v44) = -1;
            LOBYTE(v42) = -1;
            LOBYTE(v40) = 0;
            LOBYTE(v38) = 0;
            LOBYTE(v36) = 0;
          }
          if ( v12 )
          {
            v26 = (*(_DWORD *)(v8 + 1344) & 0x10) != 0;
            v27 = (*(_DWORD *)(v8 + 1344) & 4) != 0;
            v28 = (*(_DWORD *)(v8 + 1344) & 0x20) != 0;
            v29 = (*(_DWORD *)(v8 + 1344) & 8) != 0;
            v49 = 1;
            v47 = *(_BYTE *)(v8 + 1344) & 3;
          }
          else
          {
            v47 = 0;
            v29 = 0;
            v28 = 0;
            v49 = 0;
            v27 = 0;
            v26 = 0;
          }
          if ( v11 )
            v9 = *(_BYTE *)(v8 + 1341);
          McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer(
            *(unsigned __int16 *)(v8 + 200),
            &USBHUB3_ETW_EVENT_RUNDOWN_20_PORT_V2,
            a1,
            *(_QWORD *)(a2 + 248),
            *(_WORD *)(v8 + 200),
            v11,
            v9,
            v49,
            v26,
            v27,
            v28,
            v29,
            v47,
            *(_QWORD *)(v8 + 1416),
            v22,
            v36,
            v38,
            v40,
            v42,
            v44,
            v51,
            v25,
            v24,
            v23);
          goto LABEL_44;
        }
      }
      else if ( v13 == 5000 && (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
      {
        v14 = *(_DWORD *)(a2 + 168);
        v15 = (const char *)(a2 + 186);
        v16 = (const char *)(a2 + 176);
        v17 = (const char *)(a2 + 181);
        if ( v14 != 2 )
        {
          v15 = 0LL;
          v17 = 0LL;
          v16 = 0LL;
        }
        if ( v14 == 1 )
        {
          v37 = *(_DWORD *)(a2 + 176);
          v39 = *(_DWORD *)(a2 + 196);
          v50 = *(_WORD *)(a2 + 184);
          v41 = *(_DWORD *)(a2 + 192);
          v35 = *(_DWORD *)(a2 + 180);
          v9 = 0;
          v43 = *(_DWORD *)(a2 + 188);
        }
        else
        {
          LOBYTE(v50) = 0;
          LOBYTE(v35) = -1;
          LOBYTE(v37) = -1;
          LOBYTE(v39) = 0;
          LOBYTE(v41) = 0;
          LOBYTE(v43) = 0;
        }
        if ( v12 )
        {
          v18 = (*(_DWORD *)(v8 + 1344) & 0x10) != 0;
          v19 = (*(_DWORD *)(v8 + 1344) & 4) != 0;
          v20 = (*(_DWORD *)(v8 + 1344) & 0x20) != 0;
          v21 = (*(_DWORD *)(v8 + 1344) & 8) != 0;
          v48 = 1;
          v46 = *(_BYTE *)(v8 + 1344) & 3;
        }
        else
        {
          v46 = 0;
          v21 = 0;
          v20 = 0;
          v48 = 0;
          v19 = 0;
          v18 = 0;
        }
        if ( v11 )
          v9 = *(_BYTE *)(v8 + 1341);
        McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer(
          *(unsigned __int16 *)(v8 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_30_PORT_V2,
          a1,
          *(_QWORD *)(a2 + 248),
          *(_WORD *)(v8 + 200),
          v11,
          v9,
          v48,
          v18,
          v19,
          v20,
          v21,
          v46,
          *(_QWORD *)(v8 + 1416),
          v14,
          v43,
          v41,
          v39,
          v37,
          v35,
          v50,
          v16,
          v17,
          v15);
LABEL_44:
        v6 = a2 + 2376;
      }
      if ( v11 && (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
      {
        LOBYTE(v34) = v12;
        LODWORD(v33) = *(unsigned __int16 *)(v8 + 200);
        McTemplateK0pqun_EtwWriteTransfer(
          *(unsigned __int16 *)(v8 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_UPC_V1,
          a1,
          *(_QWORD *)(a2 + 248),
          v33,
          v34);
      }
      if ( (*(_DWORD *)(v8 + 204) & 4) != 0 && (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
      {
        LODWORD(v33) = *(unsigned __int16 *)(v8 + 200);
        McTemplateK0pqn_EtwWriteTransfer(
          *(unsigned __int16 *)(v8 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_PLD,
          a1,
          *(_QWORD *)(a2 + 248),
          v33);
      }
      if ( (*(_DWORD *)(v8 + 204) & 0x800) == 0 )
        goto LABEL_56;
      v30 = *(_QWORD *)(v8 + 1464);
      *(_OWORD *)Src = 0LL;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v30,
        Src);
      Pool2 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
      v9 = 0;
      v32 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, Src[1], LOWORD(Src[0]));
        if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
        {
          LODWORD(v33) = *(unsigned __int16 *)(v8 + 200);
          McTemplateK0pqz_EtwWriteTransfer(
            *(unsigned __int16 *)(v8 + 200),
            &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_DSD_USB4,
            a1,
            *(_QWORD *)(a2 + 248),
            v33,
            v32);
        }
        ExFreePoolWithTag(v32, 0x64334855u);
LABEL_56:
        v9 = 0;
      }
      result = *(_QWORD *)(v8 + 248);
      v8 = result - 248;
    }
    while ( v6 != result );
  }
  return result;
}
