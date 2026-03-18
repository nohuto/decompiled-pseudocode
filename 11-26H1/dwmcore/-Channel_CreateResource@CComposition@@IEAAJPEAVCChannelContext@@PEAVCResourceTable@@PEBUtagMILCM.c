/*
 * XREFs of ?Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1801557B0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x18015570C (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x180174840 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::Channel_CreateResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_CREATERESOURCE *a4)
{
  int v4; // r12d
  unsigned int v6; // ebx
  struct CChannelContext *v8; // r11
  CComposition *v9; // r10
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int *v21; // rsi
  __int64 v22; // r8
  _DWORD *v23; // rdx
  struct CChannelContext *v24; // rcx
  unsigned int v26; // eax
  int v27; // r9d
  int v28; // esi
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v32; // [rsp+30h] [rbp-89h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-81h] BYREF
  struct CChannelContext *v34; // [rsp+40h] [rbp-79h] BYREF
  CComposition *v35; // [rsp+48h] [rbp-71h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+60h] [rbp-59h] BYREF
  int *v39; // [rsp+70h] [rbp-49h]
  __int64 v40; // [rsp+78h] [rbp-41h]
  CComposition **v41; // [rsp+80h] [rbp-39h]
  __int64 v42; // [rsp+88h] [rbp-31h]
  unsigned __int64 *v43; // [rsp+90h] [rbp-29h]
  __int64 v44; // [rsp+98h] [rbp-21h]
  struct CChannelContext **v45; // [rsp+A0h] [rbp-19h]
  __int64 v46; // [rsp+A8h] [rbp-11h]
  _QWORD **v47; // [rsp+B0h] [rbp-9h]
  __int64 v48; // [rsp+B8h] [rbp-1h]

  v4 = *((_DWORD *)a4 + 2);
  v6 = *((_DWORD *)a4 + 1);
  v34 = a2;
  v35 = this;
  v8 = a2;
  v33 = 0LL;
  v9 = this;
  v10 = 0LL;
  v11 = 0LL;
  if ( !v4 || !v6 )
  {
    v26 = 398;
LABEL_32:
    v27 = -2147024809;
    v28 = -2147024809;
    v15 = -2147024809;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, v26, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x47u, 0LL);
    goto LABEL_11;
  }
  if ( v6 >= *((_DWORD *)a3 + 7) )
  {
    v31 = HANDLE_TABLE::ResizeToFit((struct CResourceTable *)((char *)a3 + 16), v6);
    if ( v31 < 0 )
    {
      v15 = v31;
      v27 = v31;
      v28 = v31;
      v26 = 411;
      goto LABEL_33;
    }
    v9 = v35;
    v8 = v34;
  }
  v12 = *((_QWORD *)a3 + 5);
  v13 = *((_DWORD *)a3 + 6) * v6;
  if ( *(_DWORD *)(v13 + v12) )
  {
    v26 = 426;
    goto LABEL_32;
  }
  *(_DWORD *)(v13 + v12) = v4;
  v11 = *((_QWORD *)a3 + 5) + *((_DWORD *)a3 + 6) * v6;
  *(_QWORD *)(v11 + 8) = 0LL;
  v14 = CResourceFactory::Create(v9, v8, *((unsigned int *)a4 + 2), &v33);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x4Cu, 0LL);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v33 + 56LL))(v33);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x52u, 0LL);
    }
    else
    {
      v19 = *((_DWORD *)a4 + 1);
      v15 = -2147024890;
      v20 = (__int64)v33;
      if ( v19 )
      {
        if ( v19 < *((_DWORD *)a3 + 7) )
        {
          v21 = (unsigned int *)(*((_QWORD *)a3 + 5) + *((_DWORD *)a3 + 6) * v19);
          if ( *v21 )
          {
            if ( v21 )
            {
              *((_QWORD *)v21 + 1) = v33;
              (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v20 + 8LL))(
                v20,
                v17,
                v18,
                2147942406LL);
              v22 = *v21;
              v23 = (_DWORD *)*((_QWORD *)a3 + 7);
              if ( (_DWORD)v22 != 164 )
              {
                switch ( (int)v22 )
                {
                  case 2:
                  case 44:
                  case 76:
                  case 91:
                  case 137:
                    ++v23[30];
                    v22 = (unsigned int)(v22 - 2);
                    goto LABEL_28;
                  case 31:
                    ++v23[31];
                    v22 = (unsigned int)(v22 - 2);
                    goto LABEL_28;
                  case 35:
                  case 138:
                    ++v23[26];
                    v22 = (unsigned int)(v22 - 2);
                    goto LABEL_28;
                  case 70:
                    ++v23[29];
                    v22 = (unsigned int)(v22 - 2);
                    goto LABEL_28;
                  case 71:
                  case 139:
                  case 156:
                    break;
                  default:
                    ++v23[27];
                    goto LABEL_18;
                }
              }
              ++v23[28];
              if ( (_DWORD)v22 == 164 )
              {
LABEL_30:
                ++dword_1803DE910;
              }
              else
              {
LABEL_18:
                v22 = (unsigned int)(v22 - 2);
LABEL_28:
                switch ( (int)v22 )
                {
                  case 0:
                  case 42:
                  case 74:
                  case 89:
                  case 135:
                    ++dword_1803DE918;
                    break;
                  case 29:
                    ++dword_1803DE91C;
                    break;
                  case 33:
                  case 136:
                    ++dword_1803DE908;
                    break;
                  case 68:
                    ++dword_1803DE914;
                    break;
                  case 69:
                  case 137:
                  case 154:
                    goto LABEL_30;
                  default:
                    ++dword_1803DE90C;
                    break;
                }
              }
              v24 = v34;
              v15 = 0;
              v33[7] = v34;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
              {
                v29 = *((_DWORD *)v24 + 6);
                v30 = *((unsigned int *)a4 + 1);
                v36 = v33;
                LODWORD(v34) = *((_DWORD *)a4 + 2);
                LODWORD(v35) = v30;
                v37 = v30 | ((unsigned __int64)v29 << 32);
                v32 = v29;
                v39 = (int *)&v32;
                v40 = 4LL;
                v41 = &v35;
                v43 = &v37;
                v45 = &v34;
                v47 = &v36;
                v42 = 4LL;
                v44 = 8LL;
                v46 = 4LL;
                v48 = 8LL;
                McGenEventWrite_EventWriteTransfer(
                  &Microsoft_Windows_Dwm_Core_Provider_Context,
                  &EVTDESC_DCOMPEVENT_RESOURCE,
                  v22,
                  6u,
                  &v38);
              }
              v10 = (__int64)v33;
              v33 = 0LL;
              goto LABEL_23;
            }
          }
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024890, 0x53u, 0LL);
    }
  }
LABEL_11:
  if ( v11 )
    CResourceTable::DeleteHandle(a3, *((_DWORD *)a4 + 1));
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v33);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x5B8u, 0LL);
LABEL_23:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v15;
}
