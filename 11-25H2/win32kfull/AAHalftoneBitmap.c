/*
 * XREFs of AAHalftoneBitmap @ 0x14013B328
 * Callers:
 *     HT_HalftoneBitmap @ 0x14013D908 (HT_HalftoneBitmap.c)
 * Callees:
 *     InitializeFUDI @ 0x14013AC30 (InitializeFUDI.c)
 *     SetupAAHeader @ 0x14013BB0C (SetupAAHeader.c)
 *     ValidateHTSI @ 0x14013D1C8 (ValidateHTSI.c)
 *     CreateDyesColorMappingTable @ 0x14013D548 (CreateDyesColorMappingTable.c)
 *     SetGrayColorTable @ 0x14013D69C (SetGrayColorTable.c)
 *     GetDstBFInfo @ 0x1402F4694 (GetDstBFInfo.c)
 *     FindBGRMapCache @ 0x1402F56C8 (FindBGRMapCache.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall AAHalftoneBitmap(__int64 *a1)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rdi
  int DyesColorMappingTable; // ebx
  __int64 v6; // r9
  BOOL v7; // r14d
  int v8; // ecx
  int v9; // r14d
  unsigned int v10; // ebx
  int v11; // r13d
  char v12; // r13
  unsigned __int64 v13; // r8
  unsigned __int8 v14; // r14
  __int64 (__fastcall *v15)(int, int, int, int, __int64); // rcx
  __int64 (__fastcall *v17)(int, int, int, int, __int64, __int64, __int64, int, int); // rax
  bool v18; // zf
  __int64 v19; // rax
  _OWORD *v20; // rdx
  _OWORD *v21; // rax
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(int, int, int, int, __int64, __int64, __int64, int); // rax
  int v24; // ecx
  char v25; // al
  __int64 v26; // r11
  void *v27; // r10
  unsigned __int8 *v28; // rdx
  bool v29; // zf
  __int64 v30; // rcx
  void *v31; // [rsp+20h] [rbp-88h]
  int v32; // [rsp+30h] [rbp-78h]
  int v33; // [rsp+34h] [rbp-74h]
  __int64 v34; // [rsp+38h] [rbp-70h]
  __int64 (__fastcall *v35)(__int64); // [rsp+58h] [rbp-50h] BYREF
  __int64 v36; // [rsp+60h] [rbp-48h]
  unsigned __int8 v37; // [rsp+B0h] [rbp+8h]
  BOOL v38; // [rsp+C0h] [rbp+18h]
  int v39; // [rsp+C8h] [rbp+20h]

  v35 = 0LL;
  v2 = *a1;
  v3 = a1[1];
  v4 = a1[6];
  DyesColorMappingTable = ValidateHTSI(a1, 0LL);
  if ( DyesColorMappingTable < 0 )
    goto LABEL_37;
  DyesColorMappingTable = ValidateHTSI(a1, 1LL);
  if ( DyesColorMappingTable < 0 )
    goto LABEL_37;
  DyesColorMappingTable = ValidateHTSI(a1, 2LL);
  if ( DyesColorMappingTable < 0 )
    goto LABEL_37;
  DyesColorMappingTable = SetupAAHeader(a1, v2, v4, &v35);
  if ( DyesColorMappingTable <= 0 )
  {
    *(_QWORD *)(v4 + 304) = 0LL;
    *(_QWORD *)(v4 + 312) = 0LL;
LABEL_37:
    EngReleaseSemaphore(*(HSEMAPHORE *)(v2 + 8));
    return (unsigned int)DyesColorMappingTable;
  }
  DyesColorMappingTable = CreateDyesColorMappingTable(a1);
  v33 = DyesColorMappingTable;
  v7 = DyesColorMappingTable > 0;
  v38 = v7;
  if ( DyesColorMappingTable > 0 )
  {
    v37 = *(_BYTE *)(v3 + 31);
    v8 = *(_DWORD *)v4;
    v39 = *(_DWORD *)v4;
    v36 = *(_QWORD *)(v4 + 136);
    v9 = *(_DWORD *)(*(_QWORD *)(v4 + 304) + 4LL);
    v10 = *(_DWORD *)(v4 + 444);
    v31 = 0LL;
    v32 = *(_DWORD *)(v3 + 56) & 0x2000000;
    if ( v32 )
      v31 = (void *)(v2 + 548);
    v11 = v8 & 0x800;
    if ( v8 < 0 )
    {
      v38 = 0;
      if ( (v8 & 0x800) != 0 )
      {
        v19 = *(_QWORD *)(v2 + 7064);
        *(_QWORD *)(v4 + 336) = v19;
        if ( (v8 & 0x1000) != 0 )
          *(_QWORD *)(v4 + 336) = v19 + 768;
      }
      v34 = v4 + 376;
      v12 = v39;
    }
    else
    {
      v34 = v4 + 376;
      memmove(*(void **)(v4 + 376), (const void *)(v2 + 856), 0xC1CuLL);
      v18 = v11 == 0;
      v12 = v39;
      if ( !v18 )
      {
        v20 = *(_OWORD **)(v2 + 7064);
        v21 = *(_OWORD **)(v4 + 336);
        if ( (v39 & 0x1000) != 0 )
        {
          memmove(*(void **)(v4 + 336), v20 + 48, 0x800uLL);
        }
        else
        {
          v22 = 6LL;
          do
          {
            *v21 = *v20;
            v21[1] = v20[1];
            v21[2] = v20[2];
            v21[3] = v20[3];
            v21[4] = v20[4];
            v21[5] = v20[5];
            v21[6] = v20[6];
            v21 += 8;
            *(v21 - 1) = v20[7];
            v20 += 8;
            --v22;
          }
          while ( v22 );
        }
      }
      EngReleaseSemaphore(*(HSEMAPHORE *)(v2 + 8));
    }
    if ( (*(_BYTE *)(v4 + 8) & 4) != 0 )
      SetGrayColorTable(*(_QWORD *)(v4 + 384));
    if ( *(_DWORD *)(v4 + 528) )
      InitializeFUDI(v4);
    *(_QWORD *)(v4 + 560) -= 4LL;
    v13 = v37;
    if ( v37 > 0xF8u )
    {
      switch ( v37 )
      {
        case 0xF9u:
          goto LABEL_98;
        case 0xFAu:
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_B332_XLATE;
          v23 = OutputAATo8BPP_B332;
          goto LABEL_94;
        case 0xFBu:
          BYTE1(v31) = *(_BYTE *)(*(_QWORD *)(v4 + 376) + 17LL);
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_MONO;
          goto LABEL_22;
        case 0xFCu:
        case 0xFDu:
          if ( (v36 & 3) != 0 )
          {
            LOBYTE(v31) = 1;
            LOBYTE(v9) = v9 - 1;
          }
          if ( (v9 & 1) != 0 )
          {
            BYTE3(v31) = 1;
            *(_QWORD *)(v4 + 568) -= 4LL;
          }
          if ( (_BYTE)v10 )
          {
            if ( (_BYTE)v10 != 4 )
            {
              v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_ExtBGR;
              goto LABEL_22;
            }
            v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_555_BGR;
            v17 = OutputAATo16BPP_565_BGR;
            v18 = v37 == 0xFD;
LABEL_45:
            if ( !v18 )
              v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))v17;
            goto LABEL_22;
          }
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_565_RGB;
          v23 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo16BPP_555_RGB;
          v29 = v37 == 0xFD;
LABEL_95:
          if ( v29 )
            v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))v23;
          goto LABEL_22;
        case 0xFEu:
          v13 = *(_QWORD *)(v4 + 400);
          v26 = a1[7];
          if ( v26 )
          {
            v27 = *(void **)(v4 + 400);
            if ( v13 )
            {
              v28 = (unsigned __int8 *)&VGA256Xlate;
              LODWORD(v6) = 366;
              do
              {
                *(_BYTE *)v13++ = *(_BYTE *)(*v28++ + v26);
                v18 = (_DWORD)v6 == 1;
                v6 = (unsigned int)(v6 - 1);
              }
              while ( !v18 );
            }
          }
          else
          {
            v27 = &VGA256Xlate;
          }
          v31 = v27;
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA256;
          LOBYTE(v13) = v37;
          goto LABEL_22;
      }
      if ( v37 != 255 )
      {
LABEL_71:
        v15 = 0LL;
        v33 = -11;
        goto LABEL_22;
      }
    }
    else
    {
      if ( v37 == 248 )
        goto LABEL_98;
      if ( v37 == 1 )
      {
        BYTE1(v31) = -((v12 & 4) == 0);
        if ( *(_BYTE *)(v4 + 97) )
        {
          v24 = 8 - *(unsigned __int8 *)(v4 + 97);
          v25 = v9;
          v9 -= v24;
          if ( v9 < 0 )
          {
            LOBYTE(v24) = v25;
            BYTE2(v31) = -(char)v9;
            LOBYTE(v9) = 0;
          }
          LOBYTE(v31) = v24;
        }
        v14 = v9 & 7;
        BYTE3(v31) = v14;
        if ( v14 )
          *(_QWORD *)(v4 + 568) += -4LL * v14;
        v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo1BPP;
        goto LABEL_22;
      }
      if ( v37 != 2 )
      {
        if ( v37 == 5 )
        {
          *(_WORD *)((char *)&v31 + 1) = v10 >> 8;
          BYTE3(v31) = HIBYTE(v10);
          LOBYTE(v31) = v10;
          if ( !(_BYTE)v10 )
          {
            v15 = OutputAATo24BPP_RGB;
            goto LABEL_22;
          }
          v15 = OutputAATo24BPP_BGR;
          v17 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo24BPP_ORDER;
LABEL_44:
          v18 = (_BYTE)v10 == 4;
          goto LABEL_45;
        }
        if ( v37 == 6 )
        {
          *(_WORD *)((char *)&v31 + 1) = v10 >> 8;
          BYTE3(v31) = HIBYTE(v10);
          LOBYTE(v31) = v10;
          if ( !(_BYTE)v10 )
          {
            v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo32BPP_RGB;
LABEL_22:
            *(_QWORD *)(v4 + 272) = v15;
            if ( v15 )
            {
              *(_QWORD *)(v4 + 280) = v31;
              if ( (*(_DWORD *)v4 & 0x800) != 0 )
              {
                LOBYTE(v6) = v10;
                GetDstBFInfo(v4, *(_QWORD *)(a1[2] + 8), v13, v6);
              }
              DyesColorMappingTable = v35(v4);
              v7 = v38;
            }
            else
            {
              DyesColorMappingTable = v33;
              v7 = v38;
            }
            if ( (v12 & 0x18) != 0 )
            {
              v30 = *(_QWORD *)(v4 + 392);
              if ( v30 )
                FindBGRMapCache(v30, 0LL);
            }
            goto LABEL_27;
          }
          v15 = OutputAATo32BPP_BGR;
          v17 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo32BPP_ORDER;
          goto LABEL_44;
        }
        if ( v37 != 245 && v37 != 246 )
        {
          if ( v37 == 247 )
          {
            v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_B332_XLATE;
            v23 = OutputAATo8BPP_K_B332;
LABEL_94:
            v29 = v32 == 0;
            goto LABEL_95;
          }
          goto LABEL_71;
        }
LABEL_98:
        v31 = *(&p8BPPXlate + *(unsigned __int8 *)(*(_QWORD *)v34 + 16LL));
        v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_XLATE;
        if ( (unsigned __int8)(v37 + 8) > 1u )
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_XLATE;
        goto LABEL_22;
      }
    }
    BYTE1(v31) = (v12 & 4) == 0 ? 0x77 : 0;
    if ( *(_BYTE *)(v4 + 97) )
    {
      LOBYTE(v31) = 1;
      LOBYTE(v9) = v9 - 1;
    }
    if ( (v9 & 1) != 0 )
    {
      BYTE3(v31) = 1;
      *(_QWORD *)(v4 + 568) -= 4LL;
    }
    v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo4BPP;
    v17 = OutputAAToVGA16;
    v18 = v37 == 2;
    goto LABEL_45;
  }
LABEL_27:
  if ( !v7 )
    EngReleaseSemaphore(*(HSEMAPHORE *)(v2 + 8));
  EngFreeMem(*(PVOID *)(v4 + 304));
  EngFreeMem(*(PVOID *)(v4 + 312));
  *(_QWORD *)(v4 + 304) = 0LL;
  *(_QWORD *)(v4 + 312) = 0LL;
  return (unsigned int)DyesColorMappingTable;
}
