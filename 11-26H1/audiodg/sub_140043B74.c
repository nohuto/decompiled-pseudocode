/*
 * XREFs of sub_140043B74 @ 0x140043B74
 * Callers:
 *     sub_14006FEC0 @ 0x14006FEC0 (sub_14006FEC0.c)
 *     sub_140070EE0 @ 0x140070EE0 (sub_140070EE0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14002C6CC @ 0x14002C6CC (sub_14002C6CC.c)
 *     sub_1400352DC @ 0x1400352DC (sub_1400352DC.c)
 *     sub_14003F5F8 @ 0x14003F5F8 (sub_14003F5F8.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006EBF4 @ 0x14006EBF4 (sub_14006EBF4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_140043B74(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  int *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rbx
  int v10; // eax
  _QWORD *v11; // r14
  __int64 v13; // [rsp+90h] [rbp-9h] BYREF
  __int64 v14; // [rsp+98h] [rbp-1h] BYREF
  LPVOID ppv; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+Fh] BYREF
  PROPVARIANT pvar[2]; // [rsp+B0h] [rbp+17h] BYREF
  char *v18; // [rsp+C0h] [rbp+27h]
  __int64 v19; // [rsp+110h] [rbp+77h] BYREF
  __int64 v20; // [rsp+118h] [rbp+7Fh] BYREF

  ppv = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v20 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v18 = 0LL;
  v4 = sub_1400352DC(a2);
  if ( v4 >= 0 )
  {
    v4 = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, &ppv);
    if ( v4 >= 0 )
    {
      v4 = sub_1400B6010(ppv);
      if ( v4 >= 0 )
      {
        v5 = v20;
        if ( v20 != v19 )
        {
          sub_14002C6CC(&v20, v19);
          v5 = v20;
        }
        if ( !v5 )
        {
          v4 = -2147467262;
          goto LABEL_21;
        }
        LOWORD(pvar[0]) = 65;
        v6 = sub_1400B6010(v5);
        v7 = *(int **)(a2 + 8);
        v8 = *((unsigned __int16 *)v7 + 8);
        if ( v6 )
        {
          v9 = (char *)CoTaskMemAlloc(v8 + 32);
          if ( !v9 )
            goto LABEL_10;
          *(_DWORD *)v9 = *((unsigned __int16 *)v7 + 8) + 32;
          *((_DWORD *)v9 + 1) = MMDevAPI_9(*(_QWORD *)(a2 + 56));
          *((_DWORD *)v9 + 2) = *(_DWORD *)(a2 + 100);
          memcpy(v9 + 12, v7, *((unsigned __int16 *)v7 + 8) + 18LL);
          v10 = *((unsigned __int16 *)v7 + 8) + 32;
        }
        else
        {
          v9 = (char *)CoTaskMemAlloc(v8 + 64);
          if ( !v9 )
          {
LABEL_10:
            v4 = -2147024882;
            goto LABEL_21;
          }
          *(_DWORD *)v9 = *((unsigned __int16 *)v7 + 8) + 64;
          *((_DWORD *)v9 + 1) = MMDevAPI_9(*(_QWORD *)(a2 + 56));
          *((_DWORD *)v9 + 2) = *(_DWORD *)(a2 + 100);
          *(_OWORD *)(v9 + 12) = *(_OWORD *)(a2 + 104);
          *(_OWORD *)(v9 + 28) = *(_OWORD *)(a2 + 148);
          memcpy(v9 + 44, v7, *((unsigned __int16 *)v7 + 8) + 18LL);
          v10 = *((unsigned __int16 *)v7 + 8) + 64;
        }
        v18 = v9;
        LODWORD(pvar[1]) = v10;
        if ( *(_DWORD *)(a2 + 72) )
        {
          v4 = sub_1400B6010(v19);
          if ( v4 < 0 )
            goto LABEL_21;
          v11 = (_QWORD *)(a1 + 88);
          v4 = sub_1400B6010(v14);
        }
        else
        {
          v4 = sub_1400B6010(v19);
          if ( v4 < 0 )
            goto LABEL_21;
          v11 = (_QWORD *)(a1 + 88);
          v4 = sub_1400B6010(v13);
        }
        sub_14003F5F8(
          *(_DWORD *)(a2 + 80) != 0,
          a1,
          *((unsigned __int16 *)v7 + 7),
          *(unsigned __int16 *)v7,
          *(_DWORD *)(a2 + 136),
          *(_DWORD *)(a2 + 100),
          *(_DWORD *)(a2 + 72),
          *(_DWORD *)(a2 + 140),
          *(unsigned __int16 *)v7,
          v7[1],
          *((unsigned __int16 *)v7 + 7),
          *((unsigned __int16 *)v7 + 1),
          *(_DWORD *)(a2 + 32),
          *(_DWORD *)(a1 + 80),
          *(_DWORD *)(a2 + 80) != 0,
          *(_DWORD *)(a2 + 96),
          v4);
        if ( v4 >= 0 )
          sub_1400B6010(*v11);
      }
    }
  }
LABEL_21:
  PropVariantClear(pvar);
  if ( v4 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14006EBF4(
        *((_QWORD *)off_1400E73D8 + 2),
        10,
        (unsigned int)&unk_1400CA460,
        v4,
        (__int64)"CSystemAudioDeviceBase::ActivateEndpoint");
    }
    sub_14005A470("CSystemAudioDeviceBase::ActivateEndpoint", 267LL, (unsigned int)v4);
  }
  sub_140003238(&v20);
  sub_140003238(&v13);
  sub_140003238(&v14);
  sub_140003238(&v16);
  sub_140003238(&v19);
  sub_140003238((__int64 *)&ppv);
  return (unsigned int)v4;
}
