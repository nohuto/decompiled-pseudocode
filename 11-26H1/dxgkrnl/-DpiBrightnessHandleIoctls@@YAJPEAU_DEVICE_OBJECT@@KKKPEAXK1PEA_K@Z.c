/*
 * XREFs of ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x14031C304
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x1402560E0 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiBrightnessHandleIoctls(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned int a6,
        char *a7,
        unsigned __int64 *a8)
{
  __int64 (__fastcall **DeviceExtension)(struct _DEVICE_OBJECT *, __int64, _QWORD *); // rsi
  unsigned int v10; // ebx
  int v12; // r8d
  unsigned int v13; // ecx
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rbx
  ULONG TimeIncrement; // eax
  __int64 (__fastcall *v19)(struct _DEVICE_OBJECT *, __int64, _QWORD *); // rax
  unsigned int v20; // ebx
  int v21; // ecx
  int v22; // eax
  _DWORD *Pool2; // rax
  _DWORD *v24; // rdi
  _DWORD *v25; // r8
  __int128 v26; // xmm0
  int v27; // eax
  __int64 (__fastcall *v28)(struct _DEVICE_OBJECT *, __int64, _DWORD *); // rax
  int v29; // ebx
  int v31; // r8d
  int v32; // r8d
  __int64 v33; // r15
  char *v34; // r12
  __int64 v35; // rdx
  _WORD *v36; // rdi
  char *v37; // rcx
  __int64 (__fastcall *v38)(struct _DEVICE_OBJECT *, __int64, _QWORD *); // rax
  int v39; // ecx
  char *v40; // r15
  unsigned int v41; // r8d
  _DWORD *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r9
  int v45; // ecx
  unsigned int v46; // ecx
  int v47; // eax
  _QWORD v48[2]; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v49[6]; // [rsp+40h] [rbp-69h] BYREF

  DeviceExtension = (__int64 (__fastcall **)(struct _DEVICE_OBJECT *, __int64, _QWORD *))a1->DeviceExtension;
  v10 = a2;
  LODWORD(v48[0]) = a2;
  *a8 = 0LL;
  if ( !*((_BYTE *)DeviceExtension + 1161) )
  {
    v12 = a3 - 2296832;
    if ( !v12 )
    {
      if ( a6 >= 8 )
      {
        LODWORD(v48[0]) = 0;
        *(_QWORD *)a7 = 0LL;
        *a8 = 8LL;
        if ( *((_WORD *)DeviceExtension + 2296) )
        {
          *(_DWORD *)a7 = 3;
          v29 = DeviceExtension[580](a1, a2, v48);
          if ( v29 < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1625;
            return (unsigned int)v29;
          }
          v46 = *((_DWORD *)a7 + 1) & 0xFFFFFFF8;
          v47 = v48[0] & 7;
        }
        else
        {
          if ( !*((_WORD *)DeviceExtension + 2332) )
          {
            if ( *((_WORD *)DeviceExtension + 2376) )
            {
              *(_DWORD *)a7 = 1;
              return 0;
            }
            else
            {
              v29 = -1073741637;
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1654;
            }
            return (unsigned int)v29;
          }
          *(_DWORD *)a7 = 2;
          v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD *))DeviceExtension[590])(a1, v48);
          if ( v29 < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1641;
            return (unsigned int)v29;
          }
          v46 = *((_DWORD *)a7 + 1) & 0xFFFFFFFC;
          v47 = v48[0] & 3;
        }
        *((_DWORD *)a7 + 1) = v47 | v46;
      }
      else
      {
        return (unsigned int)-1073741789;
      }
      return (unsigned int)v29;
    }
    v13 = 4;
    v14 = v12 - 4;
    if ( v14 )
    {
      v15 = v14 - 4;
      if ( !v15 )
      {
        if ( a6 >= 0xC )
        {
          *a8 = 12LL;
          *(_QWORD *)a7 = 0LL;
          *((_DWORD *)a7 + 2) = 0;
          if ( *((_WORD *)DeviceExtension + 2296) )
          {
            *(_DWORD *)a7 = 3;
            v38 = DeviceExtension[579];
            v48[0] = 0LL;
            v29 = v38(a1, a2, v48);
            if ( v29 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1716;
            }
            else
            {
              *(_QWORD *)(a7 + 4) = v48[0];
            }
            return (unsigned int)v29;
          }
          if ( *((_WORD *)DeviceExtension + 2332) )
          {
            v39 = 2;
          }
          else
          {
            if ( !*((_WORD *)DeviceExtension + 2376) )
            {
              v29 = -1073741637;
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1695;
              return (unsigned int)v29;
            }
            v39 = 1;
          }
          *(_DWORD *)a7 = v39;
          v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, char *))DeviceExtension[600])(a1, a7 + 4);
          if ( v29 < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1728;
          }
          return (unsigned int)v29;
        }
        return (unsigned int)-1073741306;
      }
      v16 = v15 - 4;
      if ( !v16 )
      {
        memset(v49, 0, sizeof(v49));
        v49[0] = 0x6000000028uLL;
        memset(&v49[1], 0, 28);
        v17 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        LODWORD(v49[4]) = 1;
        *(_QWORD *)&v49[3] = v17 * TimeIncrement;
        v19 = DeviceExtension[504];
        if ( v19 )
          *((_QWORD *)&v49[3] + 1) = *(_QWORD *)((char *)v19 + 412);
        v20 = v48[0];
        DWORD1(v49[4]) = v48[0];
        if ( a4 < 0x20 )
        {
          v29 = -1073741306;
        }
        else
        {
          DWORD2(v49[4]) = *(_DWORD *)a5;
          if ( DWORD2(v49[4]) == 1 || DWORD2(v49[4]) == 2 )
          {
            DWORD2(v49[5]) |= 1u;
            *(_QWORD *)((char *)&v49[4] + 12) = a5[4];
            if ( *((_WORD *)DeviceExtension + 2376) )
            {
              v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *))DeviceExtension[599])(a1);
              if ( v29 < 0 )
              {
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 1834;
              }
            }
            else
            {
              v29 = -1073741637;
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1842;
            }
          }
          else if ( DWORD2(v49[4]) == 3 )
          {
            if ( *((_WORD *)DeviceExtension + 2296) )
            {
              HIDWORD(v49[4]) = *((_DWORD *)a5 + 1);
              v21 = DWORD2(v49[5]) | 1;
              LODWORD(v49[5]) = *((_DWORD *)a5 + 2);
              v22 = *((_DWORD *)a5 + 3);
              DWORD2(v49[5]) |= 1u;
              if ( (v22 & 7) != 0 )
                DWORD2(v49[5]) = v21 & 0xFFFFFFFE;
              Pool2 = (_DWORD *)ExAllocatePool2(256LL, 32LL, 1953656900LL);
              v24 = Pool2;
              if ( Pool2 )
              {
                v25 = Pool2;
                v26 = *(_OWORD *)(a5 + 12);
                *Pool2 = *((_DWORD *)a5 + 1);
                Pool2[1] = *((_DWORD *)a5 + 2);
                v27 = *((_DWORD *)a5 + 7);
                *(_OWORD *)(v24 + 3) = v26;
                v24[7] = v27;
                v28 = (__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64, _DWORD *))DeviceExtension[578];
                v24[2] = 24;
                v29 = v28(a1, v20, v25);
                if ( v29 < 0 )
                {
                  WdLogSingleEntry1(3LL);
                  WdLogGlobalForLineNumber = 1806;
                }
                ExFreePoolWithTag(v24, 0x74727044u);
              }
              else
              {
                v29 = -1073741801;
                WdLogSingleEntry1(6LL);
                WdLogGlobalForLineNumber = 1790;
              }
            }
            else
            {
              v29 = -1073741637;
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1815;
            }
          }
          else
          {
            DWORD2(v49[5]) |= 1u;
            v29 = -1073741637;
            *(_QWORD *)((char *)&v49[4] + 12) = 0LL;
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1855;
          }
        }
        DWORD1(v49[5]) = v29;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v49, 0x200000000LL);
        return (unsigned int)v29;
      }
      v31 = v16 - 4;
      if ( !v31 )
      {
        if ( a4 >= 4 )
        {
          if ( *((_WORD *)DeviceExtension + 2332) )
          {
            LODWORD(v48[0]) = *(_DWORD *)a5 & 1;
            v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD *))DeviceExtension[591])(a1, v48);
            if ( v29 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 2005;
            }
          }
          else
          {
            v29 = -1073741637;
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 2013;
          }
          return (unsigned int)v29;
        }
        return (unsigned int)-1073741306;
      }
      v32 = v31 - 4;
      if ( !v32 )
      {
        if ( a4 >= 4 )
        {
          if ( *(_DWORD *)a5 )
          {
            switch ( *(_DWORD *)a5 )
            {
              case 1:
                v13 = 1;
                break;
              case 2:
                v13 = 2;
                break;
              case 3:
                v13 = 3;
                break;
              case 4:
                break;
              default:
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2051;
                return (unsigned int)-1073741637;
            }
          }
          else
          {
            v13 = 0;
          }
          if ( *((_WORD *)DeviceExtension + 2296) )
          {
            v29 = DeviceExtension[582](a1, (unsigned int)a2, (_QWORD *)v13);
            if ( v29 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 2067;
            }
          }
          else if ( *((_WORD *)DeviceExtension + 2332) )
          {
            v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD))DeviceExtension[592])(a1, v13);
            if ( v29 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 2077;
            }
          }
          else
          {
            v29 = -1073741637;
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 2085;
          }
          return (unsigned int)v29;
        }
        return (unsigned int)-1073741306;
      }
      if ( v32 != 4 )
      {
        v29 = -1073741637;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 2170;
        return (unsigned int)v29;
      }
      if ( a6 < 0x604 )
        return (unsigned int)-1073741306;
      *a8 = 1540LL;
      memset(a7, 0, 0x604uLL);
      if ( !*((_WORD *)DeviceExtension + 2332) )
      {
        v29 = -1073741637;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 2160;
        return (unsigned int)v29;
      }
      v33 = 256LL;
      v34 = (char *)ExAllocatePool2(256LL, 1540LL, 1953656900LL);
      if ( !v34 )
      {
        v29 = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 2127;
        return (unsigned int)v29;
      }
      v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, char *))DeviceExtension[593])(a1, v34);
      if ( v29 < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 2150;
      }
      else
      {
        *(_WORD *)a7 = *(_WORD *)v34;
        v35 = v34 - a7;
        *((_WORD *)a7 + 1) = *((_WORD *)v34 + 1);
        v36 = a7 + 516;
        do
        {
          *(v36 - 256) = *(_WORD *)((char *)v36 + v35 - 512);
          *v36 = *(_WORD *)((char *)v36 + v35);
          v36[256] = *(_WORD *)((char *)v36 + v35 + 512);
          ++v36;
          --v33;
        }
        while ( v33 );
      }
      v37 = v34;
    }
    else
    {
      if ( a6 < 0xD0 )
        return (unsigned int)-1073741306;
      *a8 = 208LL;
      memset(a7, 0, 0xD0uLL);
      if ( !*((_WORD *)DeviceExtension + 2296) )
      {
        if ( *((_WORD *)DeviceExtension + 2332) )
        {
          v45 = 2;
        }
        else
        {
          if ( !*((_WORD *)DeviceExtension + 2376) )
          {
            v29 = -1073741637;
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1901;
            return (unsigned int)v29;
          }
          v45 = 1;
        }
        *(_DWORD *)a7 = v45;
        v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64, char *, char *))DeviceExtension[598])(
                a1,
                103LL,
                a7 + 4,
                a7 + 5);
        if ( v29 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1971;
        }
        return (unsigned int)v29;
      }
      *(_DWORD *)a7 = 3;
      v40 = (char *)ExAllocatePool2(256LL, 204LL, 1953656900LL);
      if ( !v40 )
      {
        v29 = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 1923;
        return (unsigned int)v29;
      }
      v29 = ((__int64 (__fastcall **)(struct _DEVICE_OBJECT *, __int64, char *))DeviceExtension)[581](a1, v10, v40);
      if ( v29 < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1951;
      }
      else
      {
        v41 = *((_DWORD *)v40 + 1);
        *((_DWORD *)a7 + 1) = *(_DWORD *)v40;
        *((_DWORD *)a7 + 3) = *((_DWORD *)v40 + 2);
        *((_DWORD *)a7 + 2) = v41;
        if ( v41 )
        {
          v42 = a7 + 20;
          v43 = v40 + 12 - (a7 + 16);
          v44 = v41;
          do
          {
            *(v42 - 1) = *(_DWORD *)((char *)v42 + v43 - 4);
            *v42 = *(_DWORD *)((char *)v42 + v43);
            v42[1] = *(_DWORD *)((char *)v42 + v43 + 4);
            v42 += 3;
            --v44;
          }
          while ( v44 );
        }
      }
      v37 = v40;
    }
    ExFreePoolWithTag(v37, 0x74727044u);
    return (unsigned int)v29;
  }
  return 3221226166LL;
}
