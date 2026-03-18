/*
 * XREFs of ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x1800FA580
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800F9FB0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct ID3D11VertexShader *__fastcall CD3DDevice::GetVertexShaderNoRef(CD3DDevice *this, int a2)
{
  __int64 v2; // rdi
  int v3; // r8d
  __int64 i; // rax
  __int64 v5; // rbx

  v2 = 0LL;
  v3 = 0;
  for ( i = 0LL; i < *((int *)this + 380); ++i )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 188) + 4 * i) == a2 )
    {
      if ( v3 != -1 )
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 189) + 8LL * v3);
        if ( v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(*((_QWORD *)this + 189) + 8LL * v3));
          v2 = v5;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
      }
      return (struct ID3D11VertexShader *)v2;
    }
    ++v3;
  }
  return (struct ID3D11VertexShader *)v2;
}
