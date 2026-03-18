/*
 * XREFs of ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x18011ADA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18011AFA0 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?Commit@CTypedConstantBufferBase@@IEAAXPEAVCD3DDevice@@PEBX@Z @ 0x18011B070 (-Commit@CTypedConstantBufferBase@@IEAAXPEAVCD3DDevice@@PEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CD3DBatchExecutionContext::SetLights(struct CD3DDevice **this, struct CHwLightCollectionBuffer *a2)
{
  struct CD3DDevice *v4; // rbp
  _OWORD *v5; // rbx
  _OWORD *v6; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm1
  struct CD3DDevice *v9; // rbp
  _QWORD *v10; // rbx
  struct CD3DDevice *v11; // rax

  if ( !a2 )
  {
    v10 = this + 5;
LABEL_9:
    CD3DBatchExecutionContext::Flush(this, 2147483649LL);
    goto LABEL_10;
  }
  v4 = this[3];
  v5 = (_OWORD *)((char *)a2 + 20);
  if ( memcmp_0((char *)v4 + 320, (char *)a2 + 20, 0x104uLL) )
  {
    CD3DBatchExecutionContext::Flush(this, 128LL);
    v6 = (_OWORD *)((char *)v4 + 320);
    *((_BYTE *)v4 + 312) = 1;
    v7 = 2LL;
    do
    {
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      v6[4] = v5[4];
      v6[5] = v5[5];
      v6[6] = v5[6];
      v6 += 8;
      v8 = v5[7];
      v5 += 8;
      *(v6 - 1) = v8;
      --v7;
    }
    while ( v7 );
    *(_DWORD *)v6 = *(_DWORD *)v5;
    CTypedConstantBufferBase::Commit((struct CD3DDevice *)((char *)v4 + 304), this[1], (char *)v4 + 320);
    *((_BYTE *)v4 + 312) = 0;
  }
  v9 = this[3];
  if ( memcmp_0((char *)v9 + 608, (char *)a2 + 280, 0xF0uLL) )
  {
    CD3DBatchExecutionContext::Flush(this, 256LL);
    *((_BYTE *)v9 + 600) = 1;
    *((_OWORD *)v9 + 38) = *(_OWORD *)((char *)a2 + 280);
    *((_OWORD *)v9 + 39) = *(_OWORD *)((char *)a2 + 296);
    *((_OWORD *)v9 + 40) = *(_OWORD *)((char *)a2 + 312);
    *((_OWORD *)v9 + 41) = *(_OWORD *)((char *)a2 + 328);
    *((_OWORD *)v9 + 42) = *(_OWORD *)((char *)a2 + 344);
    *((_OWORD *)v9 + 43) = *(_OWORD *)((char *)a2 + 360);
    *((_OWORD *)v9 + 44) = *(_OWORD *)((char *)a2 + 376);
    *((_OWORD *)v9 + 45) = *(_OWORD *)((char *)a2 + 392);
    *((_OWORD *)v9 + 46) = *(_OWORD *)((char *)a2 + 408);
    *((_OWORD *)v9 + 47) = *(_OWORD *)((char *)a2 + 424);
    *((_OWORD *)v9 + 48) = *(_OWORD *)((char *)a2 + 440);
    *((_OWORD *)v9 + 49) = *(_OWORD *)((char *)a2 + 456);
    *((_OWORD *)v9 + 50) = *(_OWORD *)((char *)a2 + 472);
    *((_OWORD *)v9 + 51) = *(_OWORD *)((char *)a2 + 488);
    *((_OWORD *)v9 + 52) = *(_OWORD *)((char *)a2 + 504);
    CTypedConstantBufferBase::Commit((struct CD3DDevice *)((char *)v9 + 592), this[1], (char *)v9 + 608);
    *((_BYTE *)v9 + 600) = 0;
  }
  v10 = this + 5;
  v11 = this[5];
  if ( !v11 || *((_DWORD *)a2 + 4) != *((_DWORD *)v11 + 4) )
    goto LABEL_9;
LABEL_10:
  *v10 = a2;
}
