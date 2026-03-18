/*
 * XREFs of NtGdiEngCreateBitmap @ 0x140202D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D3200 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, __int64 a2, int a3, int a4, PVOID Address)
{
  __int64 v6; // r13
  struct _GRETHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  HBITMAP Bitmap; // r14
  HANDLE v12; // rsi
  BOOL v13; // r12d
  BOOL v14; // eax
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  FLONG v20; // edi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  _BYTE v25[32]; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-B0h]
  struct W32_PUSH_LOCK *v27[21]; // [rsp+70h] [rbp-A8h] BYREF
  LONG cy; // [rsp+124h] [rbp+Ch]
  LONG lWidth; // [rsp+128h] [rbp+10h]

  lWidth = a2;
  cy = sizl.cy;
  v6 = (unsigned int)a2;
  CurrentThread = GreGetCurrentThread(*(_QWORD *)&sizl, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v27, CurrentThread);
  Bitmap = 0LL;
  v12 = 0LL;
  v13 = 1;
  if ( sizl.cx <= 0 || cy <= 0 )
  {
    v14 = 0;
  }
  else
  {
    v9 = cy * (__int64)sizl.cx;
    v14 = v9 <= 0xFFFFFFFF;
  }
  if ( v14 && (v16 = v6 * (unsigned int)cy, v16 <= 0xFFFFFFFF) )
  {
    if ( UmpdSecurityGateNoUmpdObj(v9, 0xFFFFFFFFLL, v10) && (a4 & 0x80u) != 0 )
      a4 &= ~0x80u;
    if ( Address )
    {
      v20 = a4 & 0xFFFFFFF7;
      v12 = MmSecureVirtualMemory(Address, (unsigned int)v16, 4u);
      v13 = v12 != 0LL;
      v21 = a3;
    }
    else
    {
      if ( UmpdSecurityGateNoUmpdObj(v18, v17, v19)
        && a3 != 1
        && a3 != 2
        && a3 != 3
        && a3 != 4
        && (unsigned int)(a3 - 5) >= 2 )
      {
        v13 = 0;
      }
      v20 = a4 | 8;
      v24 = *((_QWORD *)GreGetCurrentThread(v23, v22) + 8) == 0LL;
      v21 = a3;
      if ( !v24 )
        v20 |= 0x80u;
    }
    if ( v13 )
      Bitmap = EngCreateBitmap(sizl, lWidth, v21 | 0x8000u, v20, Address);
    if ( v12 )
    {
      if ( Bitmap )
      {
        SURFREF::SURFREF((SURFREF *)v25, (HSURF)Bitmap);
        if ( v26 )
        {
          *(_QWORD *)(v26 + 144) = v12;
        }
        else
        {
          MmUnsecureVirtualMemory(v12);
          EngDeleteSurface((HSURF)Bitmap);
          Bitmap = 0LL;
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v25);
      }
      else
      {
        MmUnsecureVirtualMemory(v12);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v27);
    return Bitmap;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v27);
    return 0LL;
  }
}
