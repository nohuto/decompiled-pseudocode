/*
 * XREFs of MiInitializeWowPeb @ 0x140ACCF84
 * Callers:
 *     MmCreatePeb @ 0x140ACC600 (MmCreatePeb.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     MiCreatePebOrTeb @ 0x140999EB0 (MiCreatePebOrTeb.c)
 */

__int64 __fastcall MiInitializeWowPeb(_QWORD *a1, __int64 a2)
{
  _WORD *v4; // r14
  __int64 v5; // rcx
  __int64 result; // rax
  _DWORD *v7; // r13
  __int16 v8; // ax
  bool v10; // al
  void *v11; // rdx
  void *v12; // r15
  void *v13; // r12
  _DWORD *v14; // rcx
  char v15; // al
  __int64 v16; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  void *v20; // [rsp+20h] [rbp-98h]
  void *v21; // [rsp+28h] [rbp-90h]
  void *v22; // [rsp+30h] [rbp-88h]
  void *v23; // [rsp+38h] [rbp-80h]
  void *v24; // [rsp+40h] [rbp-78h]
  void *v25; // [rsp+48h] [rbp-70h]
  void *v26; // [rsp+50h] [rbp-68h]
  void *v27; // [rsp+58h] [rbp-60h]
  void *v28; // [rsp+60h] [rbp-58h]
  void *v29; // [rsp+68h] [rbp-50h]
  void *v30; // [rsp+70h] [rbp-48h]
  void *v31; // [rsp+78h] [rbp-40h]
  void *v32; // [rsp+80h] [rbp-38h]
  void *Src; // [rsp+C8h] [rbp+10h] BYREF
  void *v34; // [rsp+D0h] [rbp+18h]
  void *v35; // [rsp+D8h] [rbp+20h]

  Src = 0LL;
  v4 = (_WORD *)(a2 + 1772);
  if ( *(_QWORD *)(a2 + 784) && (*v4 == 332 || *v4 == 452 ? (v15 = 1) : (v15 = 0), v15) )
  {
    v16 = *(_QWORD *)(a2 + 680);
    if ( !v16 || (*(_DWORD *)(MiSectionControlArea(v16) + 56) & 0x20) == 0 )
      return 3221225477LL;
    v5 = 1LL;
  }
  else
  {
    v5 = 2LL;
  }
  result = MiCreatePebOrTeb(v5, a2, &Src);
  if ( (int)result >= 0 )
  {
    v7 = Src;
    **(_QWORD **)(a2 + 784) = Src;
    if ( *(_QWORD *)(a2 + 784) )
    {
      if ( *v4 == 332 || *v4 == 452 )
      {
        v18 = a1[6];
        if ( v18 > 0x40000000 )
        {
          v18 = 0x100000LL;
          a1[6] = 0x100000LL;
        }
        v19 = a1[7];
        if ( v19 > v18 )
          v19 = 0x2000LL;
        a1[7] = v19;
      }
    }
    v10 = 0;
    if ( *(_QWORD *)(a2 + 784) )
    {
      v8 = *(_WORD *)(a2 + 1772);
      if ( v8 == 332 || v8 == 452 )
        v10 = 1;
    }
    v11 = (char *)a1 + 28;
    v12 = a1 + 5;
    v13 = (char *)a1 + 36;
    Src = (char *)a1 + 42;
    v34 = a1 + 6;
    v35 = a1 + 7;
    v20 = (char *)a1 + 76;
    v21 = (char *)a1 + 4;
    v22 = a1 + 1;
    v23 = (char *)a1 + 12;
    v24 = a1 + 14;
    v25 = (char *)a1 + 113;
    v26 = a1 + 15;
    v27 = a1 + 19;
    v28 = a1 + 16;
    v29 = (char *)a1 + 130;
    v30 = (char *)a1 + 132;
    v31 = a1 + 17;
    v32 = a1 + 18;
    if ( v10 )
    {
      RtlCopyToUser(v7 + 41, v11, 4uLL);
      RtlCopyToUser(v7 + 42, a1 + 4, 4uLL);
      RtlCopyToUser(v7 + 43, v12, 2uLL);
      RtlCopyToUser(v7 + 44, v13, 4uLL);
      RtlCopyToUser((char *)v7 + 174, Src, 2uLL);
      RtlCopyToUser(v7 + 30, v34, 4uLL);
      RtlCopyToUser(v7 + 31, v35, 4uLL);
      RtlCopyToUser(v7 + 117, v20, 4uLL);
      RtlCopyToUser(v7 + 45, v21, 4uLL);
      RtlCopyToUser(v7 + 46, v22, 4uLL);
      RtlCopyToUser(v7 + 47, v23, 4uLL);
      RtlCopyToUser(v7, v24, 1uLL);
      RtlCopyToUser((char *)v7 + 3, v25, 1uLL);
      RtlCopyToUser(v7 + 1, v26, 4uLL);
      RtlCopyToUser(v7 + 2, v27, 4uLL);
      RtlCopyToUser(v7 + 138, v28, 2uLL);
      RtlCopyToUser((char *)v7 + 554, v29, 2uLL);
      RtlCopyToUser(v7 + 139, v30, 2uLL);
      RtlCopyToUser(v7 + 284, v31, 4uLL);
      RtlCopyToUser(v7 + 285, v32, 4uLL);
      RtlCopyToUser(v7 + 26, &NtGlobalFlag, 4uLL);
      RtlCopyToUser(v7 + 286, &NtGlobalFlag2, 4uLL);
      RtlCopyToUser(v7 + 28, &qword_140E2D790, 8uLL);
      RtlCopyToUser(v7 + 130, &dword_140FBF228, 4uLL);
      RtlCopyToUser(v7 + 32, &qword_140FBF238, 4uLL);
      RtlCopyToUser(v7 + 33, &qword_140FBF230, 4uLL);
      v14 = v7 + 25;
    }
    else
    {
      RtlCopyToUser(v7 + 70, v11, 4uLL);
      RtlCopyToUser(v7 + 71, a1 + 4, 4uLL);
      RtlCopyToUser(v7 + 72, v12, 2uLL);
      RtlCopyToUser(v7 + 73, v13, 4uLL);
      RtlCopyToUser((char *)v7 + 290, Src, 2uLL);
      RtlCopyToUser(v7 + 50, v34, 8uLL);
      RtlCopyToUser(v7 + 52, v35, 8uLL);
      RtlCopyToUser(v7 + 176, v20, 4uLL);
      RtlCopyToUser(v7 + 74, v21, 4uLL);
      RtlCopyToUser(v7 + 75, v22, 4uLL);
      RtlCopyToUser(v7 + 76, v23, 4uLL);
      RtlCopyToUser(v7, v24, 1uLL);
      RtlCopyToUser((char *)v7 + 3, v25, 1uLL);
      RtlCopyToUser(v7 + 2, v26, 8uLL);
      RtlCopyToUser(v7 + 4, v27, 8uLL);
      RtlCopyToUser(v7 + 211, v28, 2uLL);
      RtlCopyToUser((char *)v7 + 846, v29, 2uLL);
      RtlCopyToUser(v7 + 212, v30, 2uLL);
      RtlCopyToUser(v7 + 494, v31, 8uLL);
      RtlCopyToUser(v7 + 496, v32, 4uLL);
      RtlCopyToUser(v7 + 47, &NtGlobalFlag, 4uLL);
      RtlCopyToUser(v7 + 497, &NtGlobalFlag2, 4uLL);
      RtlCopyToUser(v7 + 48, &qword_140E2D790, 8uLL);
      RtlCopyToUser(v7 + 198, &dword_140FBF228, 4uLL);
      RtlCopyToUser(v7 + 54, &qword_140FBF238, 8uLL);
      RtlCopyToUser(v7 + 56, &qword_140FBF230, 8uLL);
      v14 = v7 + 46;
    }
    RtlWriteULongToUser(v14, KeNumberProcessors_0);
    return 0LL;
  }
  return result;
}
