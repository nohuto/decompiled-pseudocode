/*
 * XREFs of sub_1400E22C0 @ 0x1400E22C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400DE4B4 @ 0x1400DE4B4 (sub_1400DE4B4.c)
 *     sub_1400DFFEC @ 0x1400DFFEC (sub_1400DFFEC.c)
 *     sub_1400E00D0 @ 0x1400E00D0 (sub_1400E00D0.c)
 *     sub_1400E3658 @ 0x1400E3658 (sub_1400E3658.c)
 *     sub_1400E4240 @ 0x1400E4240 (sub_1400E4240.c)
 *     sub_1400E4CB8 @ 0x1400E4CB8 (sub_1400E4CB8.c)
 *     sub_1400E4E9C @ 0x1400E4E9C (sub_1400E4E9C.c)
 *     sub_1400E5964 @ 0x1400E5964 (sub_1400E5964.c)
 */

void __fastcall sub_1400E22C0(PDEVICE_OBJECT DeviceObject, unsigned __int8 *Context)
{
  __int64 v2; // rcx
  __int16 v4; // bp
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int16 v7; // di
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int j; // edi
  __int64 v13; // rdx
  char *v14; // rdi
  char *i; // rsi
  _OWORD *v16; // rsi
  char v17; // al
  int v18; // eax
  __int64 v19; // rcx
  char v20; // [rsp+68h] [rbp+10h] BYREF
  char v21; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_QWORD *)Context + 17);
  v21 = 0;
  v20 = 0;
  v4 = 0;
  if ( (v2 & 0x400) != 0 )
    goto LABEL_50;
  if ( (v2 & 0x40000000) != 0 )
  {
    LOBYTE(v5) = Context[742];
    v6 = 0;
    if ( (_BYTE)v5 )
    {
      do
      {
        v7 = v4 + 1;
        v8 = *(_QWORD *)(*((_QWORD *)Context + 68) + 8LL * v6);
        if ( *(_BYTE *)(v8 + 3) == 48 && (int)sub_1400E4E9C(Context, v8) < 0 )
          v7 = v4;
        v5 = Context[742];
        ++v6;
        v4 = v7;
      }
      while ( v6 < v5 );
      v2 = *((_QWORD *)Context + 17);
    }
    if ( v4 == (unsigned __int8)v5 )
    {
      v2 &= ~0x40000000uLL;
      *((_QWORD *)Context + 17) = v2;
    }
  }
  if ( (v2 & 0x400) != 0 )
    goto LABEL_50;
  v9 = *((_DWORD *)Context + 143);
  if ( v9 != 1 )
  {
    if ( v9 != 2 )
      goto LABEL_19;
    while ( 1 )
    {
      *((_QWORD *)Context + 17) = v2 & 0xFFFFFFFDFFFFFFFFuLL;
      v18 = sub_1400E3658(Context, &v20);
      v19 = *((_QWORD *)Context + 17);
      if ( (v19 & 0x400) != 0 )
        goto LABEL_50;
      if ( v18 < 0 )
      {
        if ( v18 == -1073741267 )
          goto LABEL_46;
      }
      else if ( v20 && (v19 & 0x200000000LL) == 0 )
      {
        v14 = (char *)(Context + 1608);
        for ( i = (char *)*((_QWORD *)Context + 201); i != v14; i = *(char **)i )
          sub_1400E4240(Context, i + 16);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)Context + 14, 1u);
        v16 = Context + 1576;
        sub_1400DFFEC((_QWORD **)Context + 197);
        if ( *((_QWORD *)Context + 200) )
        {
          *(_QWORD *)(*(_QWORD *)v14 + 8LL) = v16;
          **((_QWORD **)Context + 202) = v16;
          *v16 = *(_OWORD *)v14;
          *((_QWORD *)Context + 202) = Context + 1608;
          *(_QWORD *)v14 = v14;
        }
        *((_QWORD *)Context + 196) = *((_QWORD *)Context + 200);
        *((_QWORD *)Context + 195) = *((_QWORD *)Context + 199);
        *((_QWORD *)Context + 200) = 0LL;
        ExReleaseResourceLite((PERESOURCE)Context + 14);
        KeLeaveCriticalRegion();
      }
      v17 = 0;
      if ( _bittest64((const signed __int64 *)Context + 17, 0x21u) )
LABEL_46:
        v17 = 1;
      v2 = *((_QWORD *)Context + 17);
      if ( (v2 & 0x400) != 0 )
        goto LABEL_50;
      if ( !v17 )
        goto LABEL_19;
    }
  }
  if ( (v2 & 0x3000) != 0 )
    sub_1400DE4B4((__int64)Context);
  v10 = *((_QWORD *)Context + 17);
  if ( (v10 & 0x400) != 0 )
    goto LABEL_50;
  if ( (v10 & 0x10000) != 0 && *((_WORD *)Context + 11) )
  {
    sub_1400E5964(Context);
  }
  else if ( (*((_DWORD *)Context + 268) & 2) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)Context + 268, 1u);
    for ( j = 0; j < *((unsigned __int16 *)Context + 12); ++j )
    {
      v13 = *(unsigned int *)(*((_QWORD *)Context + 76) + 4LL * j);
      if ( !(_DWORD)v13 )
        break;
      sub_1400E00D0((__int64)Context, v13, &v21);
      if ( (*((_DWORD *)Context + 34) & 0x400LL) != 0 )
        goto LABEL_50;
      if ( v21 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 16) + 32LL), BusRelations);
    }
    if ( (*((_DWORD *)Context + 268) & 2) == 0 )
      _interlockedbittestandreset((volatile signed __int32 *)Context + 268, 2u);
  }
LABEL_19:
  v11 = *((_QWORD *)Context + 17);
  if ( (v11 & 0x400) == 0
    && ((v11 & 0x40011000) != 0 || *((_DWORD *)Context + 143) == 2 || (*((_DWORD *)Context + 268) & 2) != 0) )
  {
    sub_1400E4CB8(Context, 5000LL);
    return;
  }
LABEL_50:
  KeSetEvent((PRKEVENT)(Context + 184), 0, 0);
}
