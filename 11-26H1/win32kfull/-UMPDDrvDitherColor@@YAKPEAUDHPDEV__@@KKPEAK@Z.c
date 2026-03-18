/*
 * XREFs of ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1402276D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall UMPDDrvDitherColor(struct DHPDEV__ *a1, int a2, int a3, unsigned int *a4)
{
  UMPDOBJ *v8; // rbx
  int v9; // eax
  int v10; // ecx
  unsigned __int64 v11; // rdi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-98h]
  unsigned int v15; // [rsp+30h] [rbp-88h] BYREF
  UMPDOBJ *v16; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v17[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+48h] [rbp-70h]
  __int64 v19; // [rsp+50h] [rbp-68h]
  __int64 v20; // [rsp+58h] [rbp-60h]
  int v21; // [rsp+60h] [rbp-58h]
  int v22; // [rsp+64h] [rbp-54h]
  void *v23; // [rsp+68h] [rbp-50h]

  *(_WORD *)((char *)v17 + 1) = 0;
  HIBYTE(v17[0]) = 0;
  v18 = 0LL;
  v15 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v16);
  *(_WORD *)((char *)v17 + 1) = 0;
  HIBYTE(v17[0]) = 0;
  v18 = 0LL;
  v8 = v16;
  if ( !v16 )
    goto LABEL_8;
  v17[1] = 13;
  LOBYTE(v17[0]) = 0;
  v19 = *(_QWORD *)v16;
  v20 = *((_QWORD *)a1 + 223);
  v21 = a2;
  v22 = a3;
  if ( a2 == 2 )
  {
    v9 = 1;
  }
  else
  {
    v9 = *((_DWORD *)a1 + 523);
    if ( v9 < 1 || v9 > 8 )
    {
      v10 = 0;
      goto LABEL_6;
    }
  }
  v10 = dword_1403656C8[v9 - 1];
LABEL_6:
  if ( !v10
    || (v11 = *((unsigned __int16 *)a1 + 1049)
            * (unsigned __int64)(((v10 * (unsigned int)*((unsigned __int16 *)a1 + 1048) + 31) >> 3) & 0x1FFFFFFC),
        v11 > 0xFFFFFFFF)
    || (v23 = UMPDOBJ::_AllocUserMem(v16, v11, 0)) == 0LL
    || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v8, v17, 0x30u, &v15, Size) == -1) )
  {
LABEL_8:
    XUMPDOBJ::~XUMPDOBJ(&v16);
    return 0LL;
  }
  if ( v23 )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)v8, (char *)v23);
    memmove(a4, KernelPtr, (unsigned int)v11);
  }
  XUMPDOBJ::~XUMPDOBJ(&v16);
  return v15;
}
