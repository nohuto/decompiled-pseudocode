/*
 * XREFs of ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x14020E780
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D3D28 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall UMPDDrvDitherColor(struct DHPDEV__ *a1, int a2, int a3, unsigned int *a4)
{
  UMPDOBJ *v8; // rbx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // rdi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-98h]
  unsigned int v16; // [rsp+30h] [rbp-88h] BYREF
  UMPDOBJ *v17; // [rsp+38h] [rbp-80h] BYREF
  _DWORD Src[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v19; // [rsp+48h] [rbp-70h]
  __int64 v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  int v22; // [rsp+60h] [rbp-58h]
  int v23; // [rsp+64h] [rbp-54h]
  void *v24; // [rsp+68h] [rbp-50h]

  *(_WORD *)((char *)Src + 1) = 0;
  HIBYTE(Src[0]) = 0;
  v19 = 0LL;
  v16 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v17);
  *(_WORD *)((char *)Src + 1) = 0;
  HIBYTE(Src[0]) = 0;
  v19 = 0LL;
  v8 = v17;
  if ( !v17 )
    goto LABEL_14;
  v9 = *((_QWORD *)a1 + 223);
  Src[1] = 13;
  LOBYTE(Src[0]) = 0;
  v20 = *(_QWORD *)v17;
  v21 = v9;
  v22 = a2;
  v23 = a3;
  if ( a2 == 2 )
  {
    v10 = 1;
  }
  else
  {
    v10 = *((_DWORD *)a1 + 523);
    if ( (unsigned int)(v10 - 1) > 7 )
    {
      v11 = 0;
      goto LABEL_7;
    }
  }
  v11 = dword_140365188[v10 - 1];
LABEL_7:
  if ( !v11
    || (v12 = *((unsigned __int16 *)a1 + 1049)
            * (unsigned __int64)(((v11 * (unsigned int)*((unsigned __int16 *)a1 + 1048) + 31) >> 3) & 0x1FFFFFFC),
        v12 > 0xFFFFFFFF)
    || (v24 = UMPDOBJ::_AllocUserMem(v17, v12, 0)) == 0LL
    || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v8, Src, 0x30u, &v16, Size) == -1) )
  {
LABEL_14:
    XUMPDOBJ::~XUMPDOBJ(&v17);
    return 0LL;
  }
  if ( v24 )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)v8, (char *)v24);
    memmove(a4, KernelPtr, (unsigned int)v12);
  }
  XUMPDOBJ::~XUMPDOBJ(&v17);
  return v16;
}
