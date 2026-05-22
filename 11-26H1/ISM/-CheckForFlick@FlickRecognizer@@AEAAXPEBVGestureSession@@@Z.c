/*
 * XREFs of ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x1801B8990
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B8750 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::CheckForFlick(FlickRecognizer *this, const struct GestureSession *a2)
{
  char v2; // r10
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r9
  unsigned int v8; // esi
  int v9; // edi
  __int64 i; // rax
  __int64 v11; // rcx
  int v12; // eax
  bool v13; // zf
  int v14; // r9d
  int v15; // r11d
  int v16; // r11d
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // [rsp+0h] [rbp-28h]
  __int64 v24; // [rsp+10h] [rbp-18h]
  int v25; // [rsp+34h] [rbp+Ch]

  v2 = *((_BYTE *)this + 138);
  if ( (v2 & 1) == 0 )
  {
    v5 = *((unsigned __int8 *)this + 136);
    v6 = *((unsigned __int8 *)this + 137);
    v7 = v5;
    v8 = *((unsigned __int16 *)this + 80);
    v9 = *((_DWORD *)this + 3 * v6 + 6);
    for ( i = 3 * v5; v9 - *((_DWORD *)this + i + 6) > v8; i = 3 * v11 )
    {
      v11 = 0LL;
      if ( v7 != 9 )
        v11 = v7 + 1;
      v12 = v5 + 1;
      LODWORD(v5) = 0;
      v13 = v7 == 9;
      v7 = v11;
      if ( !v13 )
        LODWORD(v5) = v12;
    }
    v14 = *((_DWORD *)this + 3 * v6 + 6) - *((_DWORD *)this + 3 * (int)v5 + 6);
    v23 = *(_QWORD *)((char *)this + 12 * (int)v5 + 16);
    v24 = *(_QWORD *)((char *)this + 12 * v6 + 16);
    v15 = v24 - v23;
    v25 = HIDWORD(v24) - HIDWORD(v23);
    if ( v14 > 0 )
    {
      *((_DWORD *)this + 37) = 1000 * v15 / v14;
      v16 = 1000 * v15 / v14;
      *((_DWORD *)this + 38) = 1000 * v25 / v14;
      v17 = 1000 * v25 / v14;
      if ( (*((_BYTE *)a2 + 198) & 2) != 0 )
        v18 = *((_DWORD *)a2 + 60);
      else
        LOBYTE(v18) = 0;
      v19 = (unsigned __int8)v18 & (unsigned __int8)*((_DWORD *)a2 + 3) & 0x30;
      if ( v19 == 16 )
      {
        *((_DWORD *)this + 38) = 0;
        v17 = 0;
      }
      else if ( v19 == 32 )
      {
        *((_DWORD *)this + 37) = 0;
        v16 = 0;
      }
      if ( (v2 & 2) != 0 )
      {
        v20 = *((unsigned __int16 *)this + 78);
        v21 = -v16;
        if ( v16 > 0 )
          v21 = v16;
        if ( v21 >= v20 )
          goto LABEL_24;
        v22 = -v17;
        if ( v17 > 0 )
          v22 = v17;
        if ( v22 >= v20 )
LABEL_24:
          *((_BYTE *)this + 138) = v2 | 4;
      }
    }
  }
}
