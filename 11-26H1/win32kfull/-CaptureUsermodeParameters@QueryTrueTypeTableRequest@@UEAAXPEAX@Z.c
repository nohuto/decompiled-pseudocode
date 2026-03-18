/*
 * XREFs of ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z @ 0x140285470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall QueryTrueTypeTableRequest::CaptureUsermodeParameters(QueryTrueTypeTableRequest *this, char *a2)
{
  int v4; // eax
  _QWORD *v5; // r9
  _DWORD **v7; // r8
  _DWORD *v8; // rcx
  void *v10; // r11
  const void *v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  _DWORD *v13; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v14; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0;
  GreProbeAndReadFromUntrustedVa(&v11, 8uLL, a2 + 24, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v14, 8uLL, a2 + 32, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v13, 8uLL, a2 + 40, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v12, 4uLL, a2 + 48, 4uLL, 1uLL);
  v4 = v12;
  if ( v12 >= 0
    && ((unsigned int)v12 <= *((_DWORD *)this + 15) || !*((_QWORD *)this + 8))
    && v11 == *((const void **)this + 12) )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 9);
    if ( v5 ? v14 == *((_QWORD **)this + 13) : v14 == 0LL )
    {
      v7 = (_DWORD **)((char *)this + 80);
      v8 = v13;
      if ( *((_QWORD *)this + 10) ? v13 == *((_DWORD **)this + 14) : v13 == 0LL )
      {
        v10 = (void *)*((_QWORD *)this + 8);
        if ( v10 )
        {
          GreProbeAndReadFromUntrustedVa(v10, v12, v11, v12, 1uLL);
          v4 = v12;
        }
        else
        {
          if ( v5 )
          {
            *v5 = *v14;
            v7 = (_DWORD **)((char *)this + 80);
            v8 = v13;
            v4 = v12;
          }
          if ( *v7 )
          {
            **v7 = *v8;
            v4 = v12;
          }
        }
        *((_DWORD *)this + 22) = v4;
      }
    }
  }
}
