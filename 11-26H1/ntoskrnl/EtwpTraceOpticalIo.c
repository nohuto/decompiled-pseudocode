/*
 * XREFs of EtwpTraceOpticalIo @ 0x1406C9740
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     EtwpGetScsiPassThroughCdb @ 0x1406C9288 (EtwpGetScsiPassThroughCdb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall EtwpTraceOpticalIo(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  ULONG_PTR *ScsiPassThroughCdb; // rax
  __int64 v9; // rax
  int v10; // eax
  __int16 v11; // r9
  int *v12; // rax
  char v13; // r8
  __int16 v14; // dx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  __int16 v19; // r10
  int v20; // edx
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // r9d
  __int64 *v28; // r8
  int v30; // [rsp+30h] [rbp-29h] BYREF
  int v31; // [rsp+34h] [rbp-25h]
  int v32; // [rsp+38h] [rbp-21h]
  int v33; // [rsp+3Ch] [rbp-1Dh]
  ULONG_PTR *v34; // [rsp+40h] [rbp-19h]
  __int64 v35; // [rsp+48h] [rbp-11h]
  __int64 v36; // [rsp+50h] [rbp-9h]
  __int64 v37; // [rsp+58h] [rbp-1h]
  int v38; // [rsp+60h] [rbp+7h]
  int v39; // [rsp+64h] [rbp+Bh]
  _DWORD v40[2]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+70h] [rbp+17h]
  __int64 v42; // [rsp+78h] [rbp+1Fh]
  int v43; // [rsp+80h] [rbp+27h]
  int v44; // [rsp+84h] [rbp+2Bh]
  int *v45; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v46; // [rsp+90h] [rbp+37h]

  v44 = 0;
  v5 = *(_QWORD *)(a3 + 184);
  v39 = 0;
  LOBYTE(ScsiPassThroughCdb) = *(_BYTE *)v5;
  if ( *(_BYTE *)v5 == 3 || (_BYTE)ScsiPassThroughCdb == 4 )
  {
    v30 = a2;
    v36 = a3;
    v32 = *(_DWORD *)(a3 + 56);
    v19 = ((_BYTE)ScsiPassThroughCdb != 3) + 311;
    v20 = *(_DWORD *)(a3 + 16);
    v31 = v20;
    v34 = *(ULONG_PTR **)(v5 + 24);
    v21 = *(_QWORD *)(a3 + 152);
    v37 = a4;
    v33 = 0;
    if ( v21 )
      v22 = *(_DWORD *)(v21 + 1296);
    else
      v22 = -1;
    v38 = v22;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      v33 = 1;
    }
    else
    {
      v23 = a1 & 0xFFFFFF;
      if ( v23 == 5467492 || v23 == 5460546 )
        v33 = 2;
    }
    if ( (v20 & 8) != 0 )
    {
      v24 = *(_QWORD *)(a3 + 24);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 192);
        if ( v25 )
          goto LABEL_39;
        v25 = *(_QWORD *)(*(_QWORD *)(v24 + 184) + 48LL);
LABEL_38:
        if ( v25 )
          goto LABEL_39;
      }
    }
    else
    {
      v25 = *(_QWORD *)(a3 + 192);
      if ( v25 )
      {
LABEL_39:
        v35 = *(_QWORD *)(v25 + 24);
LABEL_41:
        v46 = 52LL;
        v11 = v19;
        goto LABEL_42;
      }
      v26 = *(unsigned __int8 *)(a3 + 67);
      v27 = *(char *)(a3 + 66);
      if ( v26 <= v27 )
      {
        v28 = (__int64 *)(v5 + 48);
        while ( 1 )
        {
          v25 = *v28;
          if ( *v28 )
            goto LABEL_39;
          LOBYTE(v26) = v26 + 1;
          v28 += 9;
          if ( (unsigned __int8)v26 > v27 )
            goto LABEL_38;
        }
      }
    }
    v35 = 0LL;
    goto LABEL_41;
  }
  if ( (_BYTE)ScsiPassThroughCdb == 9 )
  {
LABEL_4:
    v40[1] = *(_DWORD *)(a3 + 16);
    v9 = *(_QWORD *)(a3 + 152);
    v40[0] = a2;
    v41 = a4;
    v42 = a3;
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 1296);
    else
      v10 = -1;
    v43 = v10;
    v11 = 313;
    v12 = v40;
    v46 = 28LL;
    goto LABEL_43;
  }
  if ( (_BYTE)ScsiPassThroughCdb == 14 )
  {
    ScsiPassThroughCdb = EtwpGetScsiPassThroughCdb((IRP *)a3);
    if ( ScsiPassThroughCdb )
    {
      v13 = *(_BYTE *)ScsiPassThroughCdb;
      ScsiPassThroughCdb = (ULONG_PTR *)((*((unsigned __int8 *)ScsiPassThroughCdb + 5) | (unsigned __int64)((*((unsigned __int8 *)ScsiPassThroughCdb + 4) | ((*((unsigned __int8 *)ScsiPassThroughCdb + 3) | (*((unsigned __int8 *)ScsiPassThroughCdb + 2) << 8)) << 8)) << 8)) << 11);
      if ( v13 == 40 || v13 == -88 )
      {
        v14 = 311;
      }
      else
      {
        if ( ((v13 - 42) & 0x7F) != 0 )
        {
          if ( v13 == 53 )
            goto LABEL_4;
          return (char)ScsiPassThroughCdb;
        }
        v14 = 312;
      }
      v15 = *(_DWORD *)(a3 + 16);
      v34 = ScsiPassThroughCdb;
      v16 = *(_QWORD *)(a3 + 152);
      v31 = v15;
      v17 = *(_DWORD *)(a3 + 56);
      v30 = a2;
      v36 = a3;
      v32 = v17;
      v37 = a4;
      v33 = 0;
      v35 = 0LL;
      if ( v16 )
        v18 = *(_DWORD *)(v16 + 1296);
      else
        v18 = -1;
      v38 = v18;
      v11 = v14;
      v46 = 28LL;
LABEL_42:
      v12 = &v30;
LABEL_43:
      v45 = v12;
      LOBYTE(ScsiPassThroughCdb) = EtwTraceKernelEvent((int)&v45, 1, 0x80000001, v11, 5249027);
    }
  }
  return (char)ScsiPassThroughCdb;
}
